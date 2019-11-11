/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 21:34:43 by badam             #+#    #+#             */
/*   Updated: 2019/11/11 21:21:40 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "libft.h"

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (1);
	//printf("\n%s:%s", ft_itoa(atoi(argv[1])), argv[1]);
	return (strcmp(ft_itoa(atoi(argv[1])), argv[1]) != 0);
}
