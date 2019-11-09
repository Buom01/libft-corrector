# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strtrim_test.c.sh                               :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: badam <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 22:12:05 by badam             #+#    #+#              #
#    Updated: 2019/11/09 18:09:04 by badam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#/bin/sh
./ft_strtrim_test.c.out "qwertyytrewqewwyyyyyew" "qwert" "yytrewqewwyyyyy" && OK || KO
./ft_strtrim_test.c.out "qqqqwwrreett" "qwert" "" && OK || KO
./ft_strtrim_test.c.out "qqqqwwwweeeee" "qeeqe" "wwww" && OK || KO
