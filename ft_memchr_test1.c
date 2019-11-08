/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_test1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 21:34:43 by badam             #+#    #+#             */
/*   Updated: 2019/11/08 17:23:51 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "libft.h"

int	main()
{
	char buff[16] = "qwert\0\1\0yuiop\0\200";

	return (ft_memchr(buff, '\200', 16) != memchr(buff, '\200', 16));
}
