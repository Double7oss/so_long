/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_Hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 03:14:08 by hel-kadd          #+#    #+#             */
/*   Updated: 2022/10/30 19:05:56 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_print_mhex(unsigned int n)
{
	char	*p;

	p = "0123456789ABCDEF";
	if (n >= 16)
	{
		ft_print_mhex(n / 16);
		ft_print_mhex(n % 16);
	}
	if (n < 16)
	{
		ft_putchar(p[n]);
	}
}

int	c_hex(unsigned int c)
{
	int	count;

	count = 1;
	while (c / 16)
	{
		count++;
		c = c / 16;
	}
	return (count);
}

int	print_mhex(unsigned int n)
{
	ft_print_mhex(n);
	return (c_hex(n));
}
