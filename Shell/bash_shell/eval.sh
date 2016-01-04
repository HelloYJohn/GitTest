#!/bin/sh -x
while read NAME VALUE
do
    eval "${NAME}=${VALUE}"
done <evaltest
echo "$COMMANY $LANGUE $LIKE"
