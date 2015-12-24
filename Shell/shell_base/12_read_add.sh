#!/bin/bash
test -e a.c
while read line
do
	echo -n "a is "
	let a=line+1
	echo $a
done < a.c
