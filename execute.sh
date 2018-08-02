#!/bin/bash
if [ $# -eq 0 ];then
	echo "Usage:./execute.sh [parameter] too few parameters"
elif [ $# -gt 1 ];then
	echo "Usage:./execute.sh [parameter] too more parameters"
else
	cd bin
	./$1
fi
