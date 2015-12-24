#!/bin/bash
p_num()
{
	if test $1!="\n"
     then echo $1
	fi
	if test $2!="\n"
	then echo $2
	fi
}
for n in $@
do
	p_num $n
done
