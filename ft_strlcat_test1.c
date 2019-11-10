/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 21:34:43 by badam             #+#    #+#             */
/*   Updated: 2019/11/10 19:34:39 by badam            ###   ########.fr       */
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
	ft_rslt = ft_strlcat(ft_memdst, str, l);
	rslt = strlcat(memdst, str, l);
	/*
	write(0, "\n", 1);
	write(0, ft_memdst, MEMLEN);
	write(0, ":", 1);
	write(0, memdst, MEMLEN);
	write(0, " ; ", 3);
	char *ft_len = ft_itoa(ft_rslt);
	char *len = ft_itoa(rslt);
	write(0, ft_len, strlen(ft_len));
	write(0, ":", 1);
	write(0, len, strlen(len));
	*/
	if (memcmp(ft_memdst, memdst, MEMLEN ) != 0 || rslt != ft_rslt)
		return (1);
	return (0);
}
