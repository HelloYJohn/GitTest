#!/bin/bash
a=1
while :
do 
	a=$(($a+1))
	if test $a -gt 255
	then break
	else 
		echo $(ping -c 1 172.16.12.$a | grep "tt1" | awk '{print $4}' | sed 's/://g' )
		ip=$(ping -c 1 172.16.12.$a | grep "tt1" | awk '{print $4}' | sed 's/://g' )
		echo $ip >> ip.txt
	fi
done
