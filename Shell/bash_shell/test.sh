#!/bin/sh
while getopts "a:bc" arg
do
    echo $arg
    case $arg in
        a)
            echo "arg a is $OPTARG"
            ;;
        b)
            echo "arg b"
            ;;
        c)
            echo "c"
            ;;
        ?)
            echo "unkonw argument"
    exit 1
    ;;
    esac
done
