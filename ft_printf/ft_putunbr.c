/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:20:21 by hel-kadd          #+#    #+#             */
/*   Updated: 2023/02/07 20:39:18 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_putunbr(unsigned int n)
{
	char	c;

	if (n >= 10)
	{
		ft_putunbr(n / 10);
		ft_putunbr(n % 10);
	}
	if (n < 10)
	{
		c = n + '0';
		ft_putchar(c);
	}
}

int	c_udec(unsigned int n)
{
	int	count;

	count = 1;
	while (n / 10 != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

int	printunbr(unsigned int n)
{
	ft_putunbr(n);
	return (c_udec((unsigned int) n));
}
