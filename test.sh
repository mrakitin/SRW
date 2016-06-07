#/bun/bash

cd /home/yakubov/projects/Eucall/srw_parallel/env/work/srw_python/
python SRWLIB_Example14_short.py

ESC_SEQ="\x1b["
COL_RESET=$ESC_SEQ"39;49;00m"
COL_RED=$ESC_SEQ"31;01m"
COL_GREEN=$ESC_SEQ"32;01m"
COL_YELLOW=$ESC_SEQ"33;01m"
COL_BLUE=$ESC_SEQ"34;01m"
COL_MAGENTA=$ESC_SEQ"35;01m"
COL_CYAN=$ESC_SEQ"36;01m"


RES=`diff -r data_example_14 data_example_14_ini`


if [[ -z $RES ]]
then
	echo -e "$COL_BLUE OK $COL_RESET"
else
	echo -e "$COL_RED FAILED $COL_RESET"
	diff -r data_example_14 data_example_14_ini
fi

cd - >/dev/null
