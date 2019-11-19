/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 22:26:20 by badam             #+#    #+#             */
/*   Updated: 2019/11/14 05:13:41 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "libft.h"
#include "unistd.h"
#include "stdio.h"

int	main(int argc, char **argv)
{
	char		c;
	const char	*s;
	char		**rslt;
	char		**refrslt;

	if (argc < 3)
		return (1);
	c = (int)(argv[2][0]);
	s = argv[1];
	rslt = ft_split((const char*)s, (char)c);
	refrslt = argv + 3;
	while ((rslt) && (refrslt && *refrslt))
	{
		//printf("\n%s:%s", *rslt, *refrslt);
		if (strcmp(*(refrslt++), *(rslt++)) != 0)
			return (1);
	}
	if (((rslt && *rslt) && !(refrslt && *refrslt))
			|| (!(rslt && *rslt) && (refrslt && *refrslt)))
		return (1);
	return (0);
}
