/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_spec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 23:30:42 by hel-kadd          #+#    #+#             */
/*   Updated: 2023/02/07 20:38:44 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_printf_spec(const char *s, va_list ap, int i)
{
	int	ret;

	ret = 0;
	if (s[i + 1] == '%')
		ret += (ft_printchar(s[i + 1]));
	else if (s[i + 1] == 'c')
		ret += (ft_printchar(va_arg(ap, int)));
	else if (s[i + 1] == 's')
		ret += (printstr(va_arg(ap, char *)));
	else if (s[i + 1] == 'd' || s[i + 1] == 'i')
		ret += (printnbr(va_arg(ap, int)));
	else if (s[i + 1] == 'u')
		ret += (printunbr(va_arg(ap, unsigned int)));
	else if (s[i + 1] == 'x')
		ret += (printhex(va_arg(ap, unsigned int)));
	else if (s[i + 1] == 'X')
		ret += (print_mhex(va_arg(ap, unsigned int)));
	else if (s[i + 1] == 'p')
		ret += printvp(va_arg(ap, size_t)) + 2;
	return (ret);
}
