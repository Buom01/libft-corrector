/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 21:34:43 by badam             #+#    #+#             */
/*   Updated: 2019/11/09 21:09:17 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "stdlib.h"
#include "stdio.h"
#include "unistd.h"
#include "libft.h"

#define MEMLEN 256

// Adapted from an idea of ntoniolo

int	main()
{
	char	memdst[MEMLEN];
	char	ft_memdst[MEMLEN];
	size_t	l;
	size_t	rslt;
	size_t	ft_rslt;

	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
	char *mem = "there is no stars in the sky";
	memcpy(memdst, mem, strlen(mem) + 1 );
	memcpy(ft_memdst, mem, strlen(mem) + 1 );
	l = strlen(str) + 4;
	rslt = strlcat(memdst, str, l);
	ft_rslt = ft_strlcat(ft_memdst, str, l);
	printf("\n%s:%s ; %zu:%zu", ft_memdst, memdst, ft_rslt, rslt);
	if (memcmp(ft_memdst, memdst, MEMLEN) != 0 || rslt != ft_rslt)
		return (1);
	return (0);
}
