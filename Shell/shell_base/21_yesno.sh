#!/bin/bash
clear
echo "enter [y/n]:"
read a
case $a in
	y|Y|yes|Yes|YES) echo "you enter!";;
	n|N|no|No|NO) echo "you don't enter!";;
esac
