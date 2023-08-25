# freeradius-demo
freeradius  eap-peap dynamic vlan  + mac auth  example



# describe
> In this project, FreeRADIUS server have been designed for portability. Validation has been conducted only on Ubuntu 20.04, Ubuntu 22.04, and Kali Linux. There might be errors related to missing library packages in other environments.

# deploy
```
scripts/deploy.sh

#start in background
scripts/start.sh

# Start in debug mode
scripts/start.sh c
```


# database
>  create database and create a operator account
```
create database raddb;
create user radius@"%" identified by "Rad@123!";
grant all privileges on raddb.* to raddb;

use raddb;
#  When importing the system database, make sure to use the correct path.
srouce mods-config/sql/main/mysql/schema.sql;
```

# freeradius
> Below are the modifications to the default configuration file. The file is located at a relative path.
1.  raddb/clients.conf
```
client private-network-1 {
        ipaddr          = 192.168.8.0/24
        secret          = testing123
}
```
2. raddb/mods-enabled/eap
> Due to the fact that EAP packets of PEAP and TTLS types are handled by the inner-tunnel section, it is necessary to set 'copy_request_to_tunnel' and 'use_tunneled_reply' to 'yes'.
```
default_eap_type = peap
copy_request_to_tunnel = yes
use_tunneled_reply = yes
```
3. Enabling and Configuring the SQL Module
```
# Symbolic links must use absolute paths. Please write the path according to your actual situation.
ln -s  /.../etc/raddb/mods-available/sql  /.../etc/raddb/mods-enabled/
```
edit raddb/mods-available/sql
```
dialect = "mysql"
#       driver = "rlm_sql_null"
driver = "rlm_sql_${dialect}"

mysql {
               # If you're not using a TLS connection for the data, please remove the TLS-related configuration within the block.
                warnings = auto
}
# 
server = "localhost"
port = 3306
login = "radius"
password = "Rad@123!"
radius_db = "raddb"
```
4. raddb/sites-available/default
> Enable the SQL module.
```
# Uncomment the SQL section, change "-sql" to "sql," or remove the '#' symbol in front of it.
authorize {
.
.
.
sql
.
.
.
}
session {
.
.
.
sql
}
.
.
.
```
# SQL Script
> insert group
```
insert into radgroupreply (groupname, attribute, op, value) values ('VLAN8', 'Tunnel-Type', '=', '13');   	# Tunnel Type VLAN
insert into radgroupreply (groupname, attribute, op, value) values ('VLAN8', 'Tunnel-Medium-Type', '=', '6');   # Protocol Field  IEEE 802
insert into radgroupreply (groupname, attribute, op, value) values ('VLAN8', "Tunnel-Private-Group-Id", '=', '8');  # Dynamic VLAN ID sent to the client.

insert into radgroupreply (groupname, attribute, op, value) values ('VLAN9', 'Tunnel-Type', '=', '13');    
insert into radgroupreply (groupname, attribute, op, value) values ('VLAN9', 'Tunnel-Medium-Type', '', '6');
insert into radgroupreply (groupname, attribute, op, value) values ('VLAN9', 'Tunnel-Private-Group-Id', '=', '9');
```
> insert user
```
INSERT INTO radcheck (username, attribute, op, value) VALUES('zhangsan', 'Cleartext-Password', ':=', 'Aa123456');
INSERT INTO radusergroup (username, groupname, priority) values ('zhangsan', 'VLAN8', 10);   # User 'zhangsan' is bound to the groupname 'VLAN8'.

INSERT INTO radcheck (username, attribute, op, value) VALUES('lisi', 'Cleartext-Password',":=","Aa123456");
INSERT INTO radusergroup (username, groupname, priority) values ('lisi', 'VLAN9', 10);  # User 'lisi' is bound to the groupname 'VLAN9'.
```
# eapol_test
> the eapol_test path is raddb/test ,If the eapol_test output ends with "SUCCESS," the test is successful, indicating that the RADIUS server is operational.
test command
```
./eapol_test -c conf -a 192.168.xx.xxx  -s testing123
```
conf 
```
network={
  phase1="tls_disable_tlsv1_0=1 tls_disable_tlsv1_1=1 tls_disable_tlsv1_2=0 tls_disable_tlsv1_3=1 peapver=0"
  key_mgmt=WPA-EAP
  eap=PEAP
  identity="lisi"
  password="Aa123456"
  phase2="eapauth=MSCHAPV2 mschapv2_retry=0"
}
```
# 802.1x + mac auth
> In many cases, we require both MAC address and 802.1x authentication to ensure that an account can only be logged in on specific devices.
1.  Create a 'macauth' table in the 'raddb' database.
```
CREATE TABLE raddb.macauth (
	id INT auto_increment NULL,
	username varchar(100) NULL,
	macaddr varchar(100) NULL,
	CONSTRAINT macauth_PK PRIMARY KEY (id)
)
```
2. Add MAC address checking action in 'post-auth'.
> site-available/default
```
post-auth {
.
.
.
if("%{sql:SELECT COUNT(macaddr) FROM macauth  WHERE username ='%{User-Name}' and macaddr='%{Calling-Station-ID}'}" > 0){
                 ok
   }
   else{
                reject
   }
.
.
.
}
```
# Generate certificates
```
cd  raddb/certs
sed -i 's/FR/CN/g' *.cnf
sed -i 's/Radius/Sichuan/g' *.cnf
sed -i 's/Somewhere/Chengdu/g' *.cnf
sed -i 's#Example Inc.#MyOrg#g' *.cnf
sed -i 's/Example Certificate Authority/radius.xxx.com/g' *.cnf 
grep 60 -r *.cnf  
sed -i 's/60/3650/g' *.cnf     #  Set the certificate validity period to 10 years.
make
```
> Edit mods-available/eap to apply the certificates generated earlier.
```
#  Please modify to use absolute paths !
private_key_file = .../certs/rsa/server.key  
certificate_file = .../certs/server.pem    
ca_file = .../certs/ca.pem                                                 
ca_path = certs/rsa
dh_file = ${certdir}/dh   
```

