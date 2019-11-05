#!/bin/sh

TESTFILES=*_test*.c
export SUCCESS="\033[0;32m✔"
export FAIL="\033[0;31m✘"
export RESET="\033[0m"

OK()
{
	printf "$SUCCESS$RESET"
}
KO()
{
	printf "$FAIL$RESET"
}

export -f OK
export -f KO

rm -Rf *.out

for test in $TESTFILES
do
	printf "$test : "
	gcc -Wall -Wextra -Werror -I../libft/ $test -o $test.out
	if [[ -f $test.sh ]]; then
		./$test.sh
		printf " (using -.sh)"
	else
		./$test.out && OK || KO
	fi
	printf "\n"
done
