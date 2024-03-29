/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 21:34:43 by badam             #+#    #+#             */
/*   Updated: 2019/11/12 19:05:02 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "stdlib.h"
#include "libft.h"
#include "stdio.h"

#define MEMLEN 128

int	main(int argc, char **argv)
{
	char	memdst[MEMLEN];
	char	ft_memdst[MEMLEN];
	char	c;
	size_t	n;
	void	*rslt;
	void	*ft_rslt;

	if (argc < 4)
		return (1);
	memset(memdst, argv[1][0], MEMLEN - 1);
	memset(ft_memdst, argv[1][0], MEMLEN - 1);
	memset(memdst + MEMLEN - 1, '\0', 1);
	memset(ft_memdst + MEMLEN - 1, '\0', 1);
	c = (int)(argv[3][0]);
	n = atoi(argv[4]);
	rslt = memccpy(memdst, argv[2], c, n);
	ft_rslt = ft_memccpy(ft_memdst, argv[2], c, n);
	//printf("\n%s:%s ; %i", ft_memdst, memdst,
	//		(ft_rslt - (void*)ft_memdst) != (rslt - (void*)memdst));
	if (memcmp(ft_memdst, memdst, MEMLEN) != 0
			|| (!(rslt == NULL && ft_rslt == NULL)
				&& (ft_rslt - (void*)ft_memdst) != (rslt - (void*)memdst)))
		return (1);
	return (0);
}
