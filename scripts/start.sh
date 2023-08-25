#!/bin/bash
# start freeradius 

#/opt/mysql/start.sh
#sleep 3

export  LD_LIBRARY_PATH=/opt/radius/lib
if [ -z "$1" ];then
        radiusd &>/dev/null
        if [ $? -ne 0 ];then
                 echo 'radiusd start failed!'
                 exit 1
        else
                 echo 'radiusd started in background!'
        fi
elif [ "$1" == "c" ];then
      radiusd -X
      if [ $? -ne 0 ];then
	echo 'radiusd start failed!'
      fi
fi


