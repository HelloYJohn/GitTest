#!/bin/bash
echo "NO password user are :"
echo $(cat /etc/shadow | grep "!!" | awk 'BEGIN {FS=":"}{print $1}')
