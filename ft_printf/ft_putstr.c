/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 20:26:03 by hel-kadd          #+#    #+#             */
/*   Updated: 2022/10/29 20:31:01 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_putstr(const char *s)
{
	int	i;

	i = 0;
	if (!s)
	{
		write(1, "NULL", 4);
	}
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

int	printstr(const char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (s[i])
		i++;
	ft_putstr(s);
	return (i);
}
