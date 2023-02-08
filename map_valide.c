/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_valide.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 18:48:25 by hel-kadd          #+#    #+#             */
/*   Updated: 2023/02/08 16:22:31 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	is_rectangular(char **map)
{
	int	i;

	i = 1;
	if (!map)
		return (0);
	while (map[i] != '\0')
	{
		if (ft_strlen(map[i]) != ft_strlen(map[0]))
			return (0);
		i++;
	}
	return (1);
}

int	is_wall(char **map)
{
	int	i;
	int	j;
	int	l;

	i = 0;
	j = 0;
	while (map[i] != '\0')
		i++;
	while (map[0][j] != '\0' && map[i - 1][j] != '\0')
	{
		if (map[0][j] != '1' || map[i - 1][j] != '1')
			return (0);
		j++;
	}
	i = 1;
	l = ft_strlen(map[i]);
	while (map[i] != '\0')
	{
		if (map[i][0] != '1' || map[i][l - 1] != '1')
			return (0);
		i++;
	}
	return (1);
}

int	is_valide(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i] != '\0')
	{
		j = 0;
		while (map[i][j] != '\0')
		{
			if (map[i][j] != 'E' && map[i][j] != 'C' && map[i][j] != 'P'
					&& map[i][j] != '1' && map[i][j] != '0')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	count_element(char **map, char c)
{
	int	x;
	int	y;
	int	count;

	y = 0;
	count = 0;
	while (map[y])
	{
		x = 0;
		while (map[y][x])
		{
			if (map[y][x] == c)
				count++;
			x++;
		}
		y++;
	}
	return (count);
}

void	valide_map(char **map)
{
	if (check_empty_line(map) == 0 || is_rectangular(map) == 0
		|| is_wall(map) == 0 || is_valide(map) == 0
		|| count_element(map, 'E') != 1 || count_element(map, 'P') != 1)
	{
		ft_printf("Error, Invalide map\n");
		free_map(map);
		exit(-1);
	}
	else
		printf("valide map\n");
}
