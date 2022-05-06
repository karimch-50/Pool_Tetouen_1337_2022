#!/bin/sh
cat /etc/passwd | sed '/^#/d' | awk 'NR%2==0' - | awk -F ":" '{print $1}' | rev | sort -r | awk '{ if(NR >= '$FT_LINE1' && NR <= '$FT_LINE2') print}' | tr '\n' ' ' | sed 's| |, |g' | sed "s|, $|.|g"
