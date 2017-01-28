#!/bin/sh

if [ $# -eq 2 ]; then
	echo $(($1 + $2))
else
	echo "Bitte genau 2 Argumente übergeben"
fi
