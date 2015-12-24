#!/bin/bash
echo "please input two number:"
read a
read b
if test $a -eq $b
then echo "NO.1 equal NO.2"
elif test $a -gt $b
then echo "NO.1 greate than NO.2"
else echo "NO.1 less than NO.2"
fi
