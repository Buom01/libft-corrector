/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 21:34:43 by badam             #+#    #+#             */
/*   Updated: 2019/11/06 22:00:10 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "stdlib.h"
#include "libft.h"
#include "stdio.h"

int	main(int argc, char **argv)
{
	size_t	len;

	if (argc < 4)
		return (1);
	len = atoi(argv[3]);
	printf("\n%s:%s",ft_strnstr(argv[1], argv[2], len),strnstr(argv[1], argv[2], len));
	return (ft_strnstr(argv[1], argv[2], len) != strnstr(argv[1], argv[2], len));
}
