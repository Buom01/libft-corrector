/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 22:26:20 by badam             #+#    #+#             */
/*   Updated: 2019/11/12 19:48:41 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "libft.h"
#include "stdlib.h"
#include "stdio.h"

int	main(int argc, char **argv)
{
	const char		*str;
	char			*rslt;
	char			*refrslt;
	unsigned int	start;
	size_t			len;

	if (argc < 5)
		return (1);
	str = argv[1];
	start = atoi(argv[2]);
	len = atoi(argv[3]);
	rslt = ft_substr(str, start, len);
	refrslt = argv[4];
	//printf("\n%s:%s", rslt, refrslt);
	if (strcmp(refrslt, rslt) != 0)
		return (1);
	return (0);
}
