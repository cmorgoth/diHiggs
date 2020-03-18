#!/bin/bash

if [ "$1" = "" ]; then
    echo "no list_name provided"
    echo "usage: source sumit_condor.sh <task_name> <input_list>"
    echo "QUIT!!"
    exit 1
fi

if [ "$2" = "" ]; then
    echo "no mother_dir provided"
    echo "usage: source sumit_condor.sh <list_name> <mother_dir>"
    echo "QUIT!!"
    exit 1
fi

##################################
###define input list and task_name
##################################
list_name=$1
mother_dir=$2
top_directory=`git rev-parse --show-toplevel`
full_list_name=${top_directory}/"list"/${list_name}".list"
echo "list name is: "$full_list_name

find_patter="/eos/uscms/"
base_dir=${mother_dir/$find_patter/}
echo ${base_dir}


if [ -f "$full_list_name" ]; then
    rm ${full_list_name}
fi

for i in `ls ${mother_dir} | grep ".root"`; do
    echo "root://cmseos.fnal.gov//"${base_dir}/${i} >> ${full_list_name} 
done;
