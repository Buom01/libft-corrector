/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 21:34:43 by badam             #+#    #+#             */
/*   Updated: 2019/11/07 17:15:18 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "stdlib.h"
#include "stdio.h"
#include "unistd.h"
#include "libft.h"

#define MEMLEN 1024

int	main(int argc, char **argv)
{
	size_t	len;
	char	*ft_memdst;
	char	*memdst;
	int		diff;

	if (argc < 4)
		return (1);
	len = atoi(argv[3]);
	if(!(ft_memdst = malloc(sizeof(char) * MEMLEN)))
		return (1);
	if(!(memdst = malloc(sizeof(char) * MEMLEN)))
	{
		free(ft_memdst);
		return (1);
	}
	memset(ft_memdst, 'x', MEMLEN);
	memset(memdst, 'x', MEMLEN);
	memcpy(ft_memdst,	argv[1], strlen(argv[1]) + 1);
	memcpy(memdst,		argv[1], strlen(argv[1]) + 1);
	strlcat(	ft_memdst,	argv[2], atoi(argv[3]));
	strlcat(	memdst,	argv[2], atoi(argv[3]));
	diff = memcmp(ft_memdst, memdst, MEMLEN);
	free(ft_memdst);
	free(memdst);
	return (!!diff);
}
