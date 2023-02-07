/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 20:31:18 by hel-kadd          #+#    #+#             */
/*   Updated: 2022/10/30 18:55:37 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_putnbr(int nb)
{
	char	c;
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		c = n + '0';
		ft_putchar(c);
	}
}

int	c_dec(int n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n / 10 != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

int	printnbr(int n)
{
	ft_putnbr(n);
	return (c_dec(n));
}
