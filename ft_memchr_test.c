/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 21:34:43 by badam             #+#    #+#             */
/*   Updated: 2019/11/08 17:21:14 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "stdlib.h"
#include "libft.h"

int	main(int argc, char **argv)
{
	int		c;
	size_t	n;

	if (argc < 4)
		return (1);
	c = (int)(argv[2][0]);
	n = (size_t)atoi(argv[3]);
	return (ft_memchr(argv[1], c, n) != memchr(argv[1], c, n));
}
