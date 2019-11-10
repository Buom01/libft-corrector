#!/bin/sh

#CONFIG
export LIBFT_PATH=../libft/

TESTFILES=*_test*.c
export SUCCESS="\033[0;32m✔"
export FAIL="\033[0;31m✘"
export SEPARATOR="\033[0;90m———"
export RESET="\033[0m"

OK()
{
	printf "$SUCCESS $RESET"
}
KO()
{
	printf "$FAIL $RESET"
}
SEPARATE()
{
	printf "$SEPARATOR $RESET"
}

export -f OK
export -f KO
export -f SEPARATE

rm -Rf *.out *.dSYM

printf "Compilation : "
sh -c "cd $LIBFT_PATH && make re &>/dev/null" && OK && printf "(Project)  " \
		|| (KO && exit)
sh -c "cd $LIBFT_PATH && make bonus &>/dev/null" && OK && printf "(Bonus)" \
		|| (KO && exit)
printf "\n\n"

for test in $TESTFILES
do
	printf "$test : "
	sh -c "clang -Wall -Wextra -Werror -g3 -fsanitize=address -I $LIBFT_PATH $test $LIBFT_PATH*.o -o $test.out" &>/dev/null
	if [[ -f $test.out ]]; then
		if [[ -f $test.sh ]]; then
			./$test.sh 2> /dev/null  # Move out errors
			printf "  \033[0;90m(using -.sh)$RESET"
		else
			./$test.out &> /dev/null && OK || KO
		fi
	else
		printf "$FAIL DO NOT COMPILE WITH TESTS (Verify your prototype) $RESET"
	fi
	printf "\n"
done

printf "\n\n\
  $SUCCESS $RESET  : Working at this point\n\
  $FAIL $RESET  : Not working in a way\n\
 $SEPARATOR $RESET : Fails after this separator could be mitiged\n"

