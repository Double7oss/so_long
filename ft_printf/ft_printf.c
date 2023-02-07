/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:08:10 by hel-kadd          #+#    #+#             */
/*   Updated: 2022/10/29 20:30:41 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	ap;
	int		x;

	x = 0;
	va_start(ap, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			x += ft_printf_spec(str, ap, i);
			i++;
		}
		else
			x += ft_printchar(str[i]);
		i++;
	}
	va_end(ap);
	return (x);
}
