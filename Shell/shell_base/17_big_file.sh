#!/bin/bash
a=0
for name in $(ls -l | awk '{ print $9 }')
do
	b=$(ls -l $name | awk '{ print $5 }')
	if test -f $name
	then
		if test $b -gt $a
		then a=$b
		namemax=$name
		fi
	fi
done
echo "the max file is $namemax and the size is $a"
