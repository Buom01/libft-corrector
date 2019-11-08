# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_memccpy_test.c.sh                               :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: badam <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 22:12:05 by badam             #+#    #+#              #
#    Updated: 2019/11/08 18:06:33 by badam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#/bin/sh
./ft_memccpy_test.c.out "" "qwertyuiop" "t" "10"  && OK || KO
./ft_memccpy_test.c.out "X" "qwertyuiop" "t" "10"  && OK || KO
./ft_memccpy_test.c.out "X" "qwertyuiop" "t" "11"  && OK || KO
./ft_memccpy_test.c.out "" "qwertyuiop" "a" "10"  && OK || KO
./ft_memccpy_test.c.out "X" "qwertyuiop" "a" "10"  && OK || KO
./ft_memccpy_test.c.out "X" "qwertyuiop" "a" "11"  && OK || KO

./ft_memccpy_test.c.out "" "qwertyuiop" "q" "0"  && OK || KO
./ft_memccpy_test.c.out "" "qwertyuiop" "q" "1"  && OK || KO
./ft_memccpy_test.c.out "" "qwertyuiop" "q" "2"  && OK || KO
