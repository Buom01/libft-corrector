/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_test1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 21:34:43 by badam             #+#    #+#             */
/*   Updated: 2019/11/07 22:27:06 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "libft.h"
#include "stdio.h"

int	main()
{
	//printf("\n%i", ft_memcmp("\0","\200",1));
	return (
		ft_memcmp("\200\220\200","\200\220\200",3) != 0
		|| ft_memcmp("\0","\200",1) != -128 
	);
}
