#!/bin/sh
mkdir /tmp/x #建立临时性目录 
 cd /tmp/x #切换到该目录 
 touch f1 f2 # 建立文件 
 f=f y="a b" # 赋值两个变量 
 echo ~+/${f}[12] $y $(echo cmd subst ) $(( 3 + 2 ))
rm -fr /tmp/x
