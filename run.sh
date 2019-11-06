#!/bin/sh

#CONFIG
export LIBFT_PATH=../libft/

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

printf "Compilation : "
sh -c "cd $LIBFT_PATH && make re &>/dev/null" && OK || (KO && exit)
sh -c "cd $LIBFT_PATH && make bonus &>/dev/null" && OK || (KO && exit)
printf "\n"

for test in $TESTFILES
do
	printf "$test : "
	sh -c "gcc -Wall -Wextra -Werror -I $LIBFT_PATH $test -o $test.out" &>/dev/null
	if [[ -f $test.out ]]; then
		if [[ -f $test.sh ]]; then
			./$test.sh
			printf "  \033[0;90m(using -.sh)$RESET"
		else
			./$test.out && OK || KO
		fi
	else
		printf "$FAIL DO NOT COMPILE WITH TESTS (Verify your prototype) $RESET"
	fi
	printf "\n"
done
