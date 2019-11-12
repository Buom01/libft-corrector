# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strtrim_test.c.sh                               :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: badam <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 22:12:05 by badam             #+#    #+#              #
#    Updated: 2019/11/12 19:51:48 by badam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#/bin/sh
./ft_strtrim_test.c.out "qwertyytrewqewwyyyyyew" "qwert" "yytrewqewwyyyyy" && OK || KO
./ft_strtrim_test.c.out "qqqqwwrreett" "qwert" "" && OK || KO
./ft_strtrim_test.c.out "qqqqwwwweeeee" "qeeqe" "wwww" && OK || KO
./ft_strtrim_test.c.out "          " " " "" && OK || KO
./ft_strtrim_test.c.out "qqqqqqq" "q" "" && OK || KO
./ft_strtrim_test.c.out "qwqwqwqw" "qw" "" && OK || KO
./ft_strtrim_test.c.out "wqwqwqwq" "qw" "" && OK || KO
./ft_strtrim_test.c.out "qwqwqwqw" "wq" "" && OK || KO
./ft_strtrim_test.c.out "wqwqwqwq" "wq" "" && OK || KO
