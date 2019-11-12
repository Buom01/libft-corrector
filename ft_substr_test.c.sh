# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_substr_test.c.sh                                :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: badam <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 22:12:05 by badam             #+#    #+#              #
#    Updated: 2019/11/12 19:32:36 by badam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#/bin/sh
./ft_substr_test.c.out "qwerty" "0" "6" "qwerty" && OK || KO
./ft_substr_test.c.out "qwerty" "0" "9" "qwerty" && OK || KO
./ft_substr_test.c.out "qwerty" "1" "9" "werty" && OK || KO
./ft_substr_test.c.out "qwerty" "0" "1" "q" && OK || KO
./ft_substr_test.c.out "qwerty" "1" "1" "w" && OK || KO
./ft_substr_test.c.out "qwerty" "400" "20" "" && OK || KO
