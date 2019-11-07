/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 21:34:43 by badam             #+#    #+#             */
/*   Updated: 2019/11/07 22:19:56 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "libft.h"

int	main()
{
	return (
		ft_memcmp("qwerty","qwertz",4) != 0
		|| ft_memcmp("qwerty","qwertz",5) != 0
		|| ft_memcmp("qwerty","qwertz",6) != -1 
		|| ft_memcmp("qwerty","qwertz",7) != -1 
	);
}
