# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_memchr_test.c.sh                                :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: badam <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 22:12:05 by badam             #+#    #+#              #
#    Updated: 2019/11/12 19:09:35 by badam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#/bin/sh
./ft_memchr_test.c.out "qwertyuiop" "t" "10"  && OK || KO
./ft_memchr_test.c.out "qwertyuiop" "" "11"  && OK || KO
./ft_memchr_test.c.out "qwertyuiop" "a" "11"  && OK || KO
./ft_memchr_test.c.out "qwertyuiop" "p" "11"  && OK || KO
./ft_memchr_test.c.out "qwertyuiop" "p" "10"  && OK || KO
./ft_memchr_test.c.out "qwertyuiop" "p" "9"  && OK || KO
./ft_memchr_test.c.out "qwertyuiop" "q" "2"  && OK || KO
./ft_memchr_test.c.out "qwertyuiop" "q" "1"  && OK || KO
./ft_memchr_test.c.out "qwertyuiop" "q" "0"  && OK || KO
./ft_memchr_test.c.out "z" "a" "50" && OK || KO
