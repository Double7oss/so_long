/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 00:41:28 by hel-kadd          #+#    #+#             */
/*   Updated: 2022/10/30 01:04:10 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	c_vp(unsigned long c)
{
	int	count;

	count = 1;
	while (c / 16 != 0)
	{
		count++;
		c = c / 16;
	}
	return (count);
}

int	printvp(unsigned long n)
{
	ft_putstr("0x");
	ft_printhex(n);
	return (c_vp(n));
}
