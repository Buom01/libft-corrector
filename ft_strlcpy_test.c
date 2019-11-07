/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 17:41:38 by badam             #+#    #+#             */
/*   Updated: 2019/11/07 21:23:44 by badam            ###   ########.fr       */
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
	size_t	len;
	char	*ft_memdst;
	char	*memdst;
	int		diff;
	size_t	rslt;
	size_t	ft_rslt;

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
	rslt = strlcpy(	memdst,	argv[2], atoi(argv[3]));
	ft_rslt = ft_strlcpy(	ft_memdst,	argv[2], atoi(argv[3]));
	diff = memcmp(ft_memdst, memdst, MEMLEN);
	//printf("\n%s:%s ; %zu:%zu", ft_memdst, memdst, ft_rslt, rslt);
	free(ft_memdst);
	free(memdst);
	return (!!diff || rslt != ft_rslt);
}
