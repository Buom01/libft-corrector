# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_split_test.c.sh                                 :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: badam <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 22:12:05 by badam             #+#    #+#              #
#    Updated: 2019/11/06 16:28:29 by badam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#/bin/sh
./ft_split_test.c.out "qwerty" "e" "qw" "rty" && OK || KO
./ft_split_test.c.out "qwerty" "" "qwerty" && OK || KO
./ft_split_test.c.out "" "e" && OK || KO
./ft_split_test.c.out "" "" && OK || KO
./ft_split_test.c.out "qewerety" "e" "q" "w" "r" "ty" && OK || KO
./ft_split_test.c.out "qweerty" "e" "qw" "rty" && OK || KO
./ft_split_test.c.out "erty" "e" "rty" && OK || KO
./ft_split_test.c.out "qwe" "e" "qw" && OK || KO
./ft_split_test.c.out "eee" "e" && OK || KO
./ft_split_test.c.out "ee" "e" && OK || KO
./ft_split_test.c.out "e" "e" && OK || KO
