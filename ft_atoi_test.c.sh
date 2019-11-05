# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_atoi_test.c.sh                                  :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: badam <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 22:12:05 by badam             #+#    #+#              #
#    Updated: 2019/11/05 22:15:09 by badam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#/bin/sh
./ft_atoi_test.c.out "0" && OK || KO
./ft_atoi_test.c.out "---0" && OK || KO
./ft_atoi_test.c.out "1" && OK || KO
./ft_atoi_test.c.out "-1" && OK || KO
./ft_atoi_test.c.out "++-5" && OK || KO
./ft_atoi_test.c.out "-5" && OK || KO
./ft_atoi_test.c.out "9" && OK || KO
./ft_atoi_test.c.out "--9" && OK || KO
./ft_atoi_test.c.out "10" && OK || KO
./ft_atoi_test.c.out "-10" && OK || KO
./ft_atoi_test.c.out "    99" && OK || KO
./ft_atoi_test.c.out "   -99" && OK || KO
