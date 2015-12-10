#!/bin/bash
# weirdvars.sh: echo 诡异的变量
set -x
var="'(]\\{}\$\""
echo $var # '(]\{}$"
echo "$var" # '(]\{}$" 并没有什么不同
echo
IFS='\'
echo $var # '(] {}$" \ 转换成空格了?明显和 IFS 有关系么!又不傻!
echo "$var" # '(]\{}$"
exit 0
