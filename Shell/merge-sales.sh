#!/bin/sh
#merge-sale.sh
sed '/^#/d' quotas | sort > quotas.sorted
sed '/^#/d' sales | sort > sales.sorted

join quotas.sorted sales.sorted

