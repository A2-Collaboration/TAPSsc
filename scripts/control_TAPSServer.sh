#!/bin/bash

#####################################################################
##                                                                 ##
## Script to control all TAPSServer instances                      ##
##                                                                 ##
#####################################################################

LOC="/opt/TAPSsc"

if [ $# -eq 1 ]
then
    if [ "$1" == "restart" ] || [ "$1" == "stop" ]
    then
        CMD=$1
        
        IS_VME=`hostname | grep vme | wc -l`
        if [ $IS_VME -eq 0 ] 
        then
            HOSTS=`grep vme-taps $TAPSSC/config/config.rootrc | cut -f2 -d: | tr -d ' '`
            for i in $HOSTS
            do
                printf "Performing TAPSServer %s on %s\n" $CMD $i 
                ssh root@$i $LOC/scripts/control_TAPSServer.sh $CMD
            done
        else
            # ROOT
            export ROOTSYS=/opt/root
            export PATH="$ROOTSYS/bin:$PATH"
            export LD_LIBRARY_PATH="$ROOTSYS/lib:$LD_LIBRARY_PATH"

            # TAPSsc
            export TAPSSC=$LOC
            export LD_LIBRARY_PATH="$TAPSSC/lib:$LD_LIBRARY_PATH"
            
            # kill old instance
            if [ "$CMD" == "restart" ] || [ "$CMD" == "stop" ]
            then
                killall -q TAPSServer
                #rm -f /run/lock/TAPSServer.pid
            fi
            
            # get server ID
            H=`hostname -s`
            ID=`grep $H $LOC/config/config.rootrc | cut -d: -f1 | sed 's/Server-//g;s/\.Host//g'`

            # start new instance
            if [ "$CMD" == "restart" ]
            then
                nohup $LOC/bin/TAPSServer -id $ID &> /dev/null &
            fi
        fi
    else
        echo "Unknown argument"
    fi
else
    echo "Usage: control_TAPSServer.sh restart|stop"
fi

