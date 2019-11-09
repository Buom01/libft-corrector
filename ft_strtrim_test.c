/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 22:26:20 by badam             #+#    #+#             */
/*   Updated: 2019/11/09 18:29:32 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "libft.h"
#include "unistd.h"
#include "stdio.h"

int	main(int argc, char **argv)
{
	const char	*charset;
	const char	*str;
	char		*rslt;
	char		*refrslt;

	if (argc < 3)
		return (1);
	charset = (char const*)(argv[2]);
	str = (const char*)(argv[1]);
	rslt = ft_strtrim(str, charset);
	refrslt = *(argv + 3);
	//printf("\n%s:%s", refrslt, rslt);
	if (strcmp(refrslt, rslt) != 0)
		return (1);
	if (((rslt && *rslt) && !(refrslt && *refrslt))
			|| (!(rslt && *rslt) && (refrslt && *refrslt)))
		return (1);
	return (0);
}
