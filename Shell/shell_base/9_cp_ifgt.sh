#1/bin/bash
a=2
while name="test.log"
do
	sleep 1
	b=$(ls -l $name | awk '{print $5}')
	if test $b -gt $a
	then `cp /tmp/*.tar.gz .`
	exit 0
	fi
done
