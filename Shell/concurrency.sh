#!/bin/sh

trap "exec 1000>&-; exec 1000<&-; exit" 2

mkfifo testfifo
exec 1000<>testfile
rm -fr testfifo

for((i = 1; i <= 10; i++))
do
    echo >&1000
done

start=`date "+%s"`

for((i = 1; i <= 100; i++))
do
    read -u1000
    {
        echo success$i; sleep 5
        echo >&1000
    }&
done

wait

end=`date "+%s"`

echo "TIME: `expr $end - $start`"
exec 1000>&-
exec 1000<&-
