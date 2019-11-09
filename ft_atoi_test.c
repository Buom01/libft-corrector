/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 21:34:43 by badam             #+#    #+#             */
/*   Updated: 2019/11/09 19:24:22 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "libft.h"
#include "stdio.h"

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (1);
	//printf("\n%i:%i", ft_atoi(argv[1]), atoi(argv[1]));
	return (ft_atoi(argv[1]) != atoi(argv[1]));
}
