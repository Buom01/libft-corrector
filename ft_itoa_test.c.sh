# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_itoa_test.c.sh                                  :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: badam <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 22:12:05 by badam             #+#    #+#              #
#    Updated: 2019/11/11 21:19:17 by badam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#/bin/sh
./ft_itoa_test.c.out "0" && OK || KO
./ft_itoa_test.c.out "1" && OK || KO
./ft_itoa_test.c.out "-1" && OK || KO
./ft_itoa_test.c.out "-5" && OK || KO
./ft_itoa_test.c.out "9" && OK || KO
./ft_itoa_test.c.out "-9" && OK || KO
./ft_itoa_test.c.out "10" && OK || KO
./ft_itoa_test.c.out "-10" && OK || KO
./ft_itoa_test.c.out "99" && OK || KO
./ft_itoa_test.c.out "-99" && OK || KO
./ft_itoa_test.c.out "2147483647" && OK || KO
./ft_itoa_test.c.out "-2147483648" && OK || KO
