#!/bin/sh -x
TEMP=`getopt -o ab:c:: --long a-long,b-long:,c-long::\
     -n 'example.bash' -- "$@"`

echo $TEMP
if [ $? != 0 ];
    then echo "Terminating ..." >&2 ; exit 1 
fi

eval set -- "$TEMP"
while true; do
    case "$1" in
        -a | --a-long) echo "Option a"; shift ;;
        -b | --b-long) echo "Option b, argument \`$2'"; shift 2;;
        -c | --c-long)
            case "$2" in
                "") echo "Option c, no argument"; shift 2;;
                *) echo "Option c, argument \`$2'"; shift 2;;
            esac;;
        --) shift; break;;
        *) echo "Internal error!" exit 1;;
    esac
done

echo "Remaining argument:"

for arg do
    echo '-->' "\`$arg'"
done
