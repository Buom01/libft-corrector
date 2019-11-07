/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 21:34:43 by badam             #+#    #+#             */
/*   Updated: 2019/11/07 21:03:23 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "stdlib.h"
#include "stdio.h"
#include "unistd.h"
#include "libft.h"

#define MEMLEN 256

int	main(int argc, char **argv)
{
	char	memdst[MEMLEN];
	char	ft_memdst[MEMLEN];
	size_t	l;
	size_t	rslt;
	size_t	ft_rslt;

	if (argc < 4)
		return (1);
	memcpy(memdst, argv[1], strlen(argv[1]) + 1 );
	memcpy(ft_memdst, argv[1], strlen(argv[1]) + 1 );
	l = atoi(argv[3]);
	rslt = strlcat(memdst, argv[2], l);
	ft_rslt = ft_strlcat(ft_memdst, argv[2], l);
	// printf("\n%s:%s ; %zu:%zu", ft_memdst, memdst, ft_rslt, rslt);
	if (memcmp(ft_memdst, memdst, MEMLEN) != 0 || rslt != ft_rslt)
		return (1);
	return (0);
}
