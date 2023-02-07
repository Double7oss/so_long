/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfhex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:06:43 by hel-kadd          #+#    #+#             */
/*   Updated: 2022/10/30 19:06:56 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_printhex(size_t n)
{
	char	*p;

	p = "0123456789abcdef";
	if (n >= 16)
	{
		ft_printhex(n / 16);
		ft_printhex(n % 16);
	}
	if (n < 16)
	{
		ft_putchar(p[n]);
	}
}

int	printhex(unsigned long n)
{
	ft_printhex(n);
	return (c_hex(n));
}
