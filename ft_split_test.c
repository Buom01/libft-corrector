/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 22:26:20 by badam             #+#    #+#             */
/*   Updated: 2019/11/06 15:42:29 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "libft.h"

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
	while (rslt && refrslt)
	{
		if (strcmp(*(rslt++), *(refrslt++)) != 0)
			return (1);
	}
	if ((rslt && !refrslt) || (!rslt && refrslt))
		return (1);
}
