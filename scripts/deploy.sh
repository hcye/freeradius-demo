#!/bin/bash
function copy_file(){
	if [ -d "/opt/radius" ];then
		echo '/opt/radius exist deploy stop!'
		exit 1
	fi
#	cp -r ../radius  ../mysql /opt
	cp -r ../radius   /opt
}
function deploy_mysql(){
	cat /etc/passwd | grep mysql
	if [ $? -ne 0 ];then
        	useradd mysql
	fi
	chown mysql:mysql /opt/mysql -R
	ls /var/run/mysqld/mysqld.sock &> /dev/null 
	if [ $? -ne 0 ];then
       		 mkdir /var/run/mysqld/ &>/dev/null
       		 touch /var/run/mysqld/mysqld.sock
		 chown mysql:mysql /var/run/mysqld/ -R
       		 chmod gou+wr /var/run/mysqld/mysqld.sock
	fi
}

function deploy_radius(){
	 ln -s /opt/radius/opt/radius/sbin/* /usr/local/bin/ 
}
copy_file
#deploy_mysql
deploy_radius
