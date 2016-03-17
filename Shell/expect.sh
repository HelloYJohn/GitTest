#!/usr/bin/expect
set timeout 30
spawn su -
expect ":"
send "ubuntu\r"
interact