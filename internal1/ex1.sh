#!/bin/bash
echo "1.Create File"
echo "2.Delete File"
echo "3.Rename File"
read ch
case $ch in
1) read f; touch $f;;
2) read f; rm $f;;
3) read o n; mv $o $n;;
*) echo "Invalid";;
esac