#!/bin/ksh
set -x

thisscript=$(basename $0)

bookname="$*"

bookname1=$(echo $bookname | sed "s/\.epub|\(|\)|\-//g")
trimbookname=$(echo $bookname | sed "s/\.epub//g" | sed "s/\s/_/g"| sed "s/\,//g")



ebook-convert "$bookname" "${bookname1}.pdf"


