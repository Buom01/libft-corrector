# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_split_test.c.sh                                 :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: badam <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 22:12:05 by badam             #+#    #+#              #
#    Updated: 2019/11/06 16:19:45 by badam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#/bin/sh
./ft_split_test.c.out "qwerty" "e" "qw" "rty" && OK || KO
./ft_split_test.c.out "qwerty" "" && OK || KO
./ft_split_test.c.out "" "e" && OK || KO
./ft_split_test.c.out "" "" && OK || KO
./ft_split_test.c.out "qewerety" "e" && OK || KO
./ft_split_test.c.out "qweerty" "e" && OK || KO
./ft_split_test.c.out "erty" "e" && OK || KO
./ft_split_test.c.out "qwe" "e" && OK || KO
./ft_split_test.c.out "eee" "e" && OK || KO
./ft_split_test.c.out "ee" "e" && OK || KO
./ft_split_test.c.out "e" "e" && OK || KO
