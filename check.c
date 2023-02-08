/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:27:30 by hel-kadd          #+#    #+#             */
/*   Updated: 2023/02/08 15:54:08 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_ber(char *av)
{
	int	i;

	i = 0;
	while (av[i])
		i++;
	i -= 1;
	if (av[i] == 'r' && av[i - 1] == 'e'
		&& av[i - 2] == 'b' && av[i - 3] == '.')
		return (1);
	return (0);
}

int	check_empty_line(char **map)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (map[y] != '\0')
	{
		if (map[y][i] == '\n')
			return (0);
		y++;
	}
	return (1);
}
