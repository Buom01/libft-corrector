# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strnstr_test.c.sh                               :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: badam <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 22:12:05 by badam             #+#    #+#              #
#    Updated: 2019/11/07 16:28:44 by badam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#/bin/sh
./ft_strnstr_test.c.out "Ma botte de foin" "Mon aiguille" "100" && OK || KO
./ft_strnstr_test.c.out "Ma botte de foin" "Mon aiguille" "10" && OK || KO
./ft_strnstr_test.c.out "Ma botte de foin" "Mon aiguille" "0" && OK || KO
./ft_strnstr_test.c.out "Ma botte de foin" "Mon aiguille" "1" && OK || KO
./ft_strnstr_test.c.out "Ma botte de foin" "a" "100" && OK || KO
./ft_strnstr_test.c.out "Ma botte de foin" "a" "10" && OK || KO
./ft_strnstr_test.c.out "Ma botte de foin" "a" "3" && OK || KO
./ft_strnstr_test.c.out "Ma botte de foin" "a" "2" && OK || KO
./ft_strnstr_test.c.out "Ma botte de foin" "a" "1" && OK || KO
./ft_strnstr_test.c.out "Ma botte de foin" "a" "0" && OK || KO
./ft_strnstr_test.c.out "Ma botte de foin" "n" "15" && OK || KO
./ft_strnstr_test.c.out "Ma botte de foin" "n" "16" && OK || KO
./ft_strnstr_test.c.out "Ma botte de foin" "in" "14" && OK || KO
./ft_strnstr_test.c.out "Ma botte de foin" "in" "15" && OK || KO
./ft_strnstr_test.c.out "Ma botte de foin" "in" "16" && OK || KO
./ft_strnstr_test.c.out "Ma botte de foin" "oin" "14" && OK || KO
./ft_strnstr_test.c.out "Ma botte de foin" "oin" "15" && OK || KO
./ft_strnstr_test.c.out "Ma botte de foin" "oin" "16" && OK || KO
./ft_strnstr_test.c.out "q" "qqqqq" "16" && OK || KO
./ft_strnstr_test.c.out "q" "qwerty" "16" && OK || KO
./ft_strnstr_test.c.out "q" "qwerty" "1" && OK || KO
./ft_strnstr_test.c.out "w" "q" "-1" && OK || KO
./ft_strnstr_test.c.out "w" "q" "-2" && OK || KO
./ft_strnstr_test.c.out "w" "q" "-500" && OK || KO
./ft_strnstr_test.c.out "" "q" "1" && OK || KO
./ft_strnstr_test.c.out "q" "" "1" && OK || KO
./ft_strnstr_test.c.out "q" "q" "0" && OK || KO
./ft_strnstr_test.c.out "" "" "1" && OK || KO
./ft_strnstr_test.c.out "q" "" "0" && OK || KO
./ft_strnstr_test.c.out "q" "" "0" && OK || KO
