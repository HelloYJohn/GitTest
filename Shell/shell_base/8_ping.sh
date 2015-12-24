#!/bin/bash
for i in {208..254}
do
	echo "the number of $i computer is "
	ping -c 1 172.16.12.$i 
done
