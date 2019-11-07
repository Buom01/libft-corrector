# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strlcat_test.c.sh                               :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: badam <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/07 16:37:38 by badam             #+#    #+#              #
#    Updated: 2019/11/07 17:22:55 by badam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#/bin/sh
./ft_strlcat_test.c.out "Ma chaine" " complete" "100" && OK || KO
./ft_strlcat_test.c.out "Ma chaine" " complete" "10" && OK || KO
./ft_strlcat_test.c.out "Ma chaine" " complete" "1" && OK || KO
./ft_strlcat_test.c.out "Ma chaine" " complete" "0" && OK || KO
./ft_strlcat_test.c.out "Ma chaine" " complete" "-1" && OK || KO
./ft_strlcat_test.c.out "q" "q" "1" && OK || KO
./ft_strlcat_test.c.out "q" "q" "2" && OK || KO
./ft_strlcat_test.c.out "q" "q" "3" && OK || KO
./ft_strlcat_test.c.out "" "q" "0" && OK || KO
./ft_strlcat_test.c.out "" "q" "1" && OK || KO
./ft_strlcat_test.c.out "" "q" "2" && OK || KO
./ft_strlcat_test.c.out "" "q" "3" && OK || KO
./ft_strlcat_test.c.out "" "" "0" && OK || KO
./ft_strlcat_test.c.out "" "" "1" && OK || KO
./ft_strlcat_test.c.out "" "" "2" && OK || KO
./ft_strlcat_test.c.out "" "" "3" && OK || KO
./ft_strlcat_test.c.out "q" "" "0" && OK || KO
./ft_strlcat_test.c.out "q" "" "1" && OK || KO
./ft_strlcat_test.c.out "q" "" "2" && OK || KO
./ft_strlcat_test.c.out "q" "" "3" && OK || KO
