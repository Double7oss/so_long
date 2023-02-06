/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_path.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:51 by hel-kadd          #+#    #+#             */
/*   Updated: 2023/02/05 19:03:37 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void flood_fill(char **map, int x, int y)
{
	if (map[y][x] != 'C' && map[y][x] != 'P' && map[y][x] != '0')
		return ;
	map[y][x] = 'H';
	flood_fill(map, x - 1, y);
	flood_fill(map, x + 1, y);
	flood_fill(map, x, y + 1);
	flood_fill(map, x, y - 1);
}

int c_exit(char **map, int x, int y)
{
	if (map[y + 1][x] == 'H' || map[y - 1][x] == 'H' || map[y][x + 1] == 'H' || map[y][x - 1] == 'H')
		return (1);
	else
		return (0);
}

int v_exit(char **map)
{
	int x;
	int y;

	y = 0;
	while (map[y] != '\0')
	{
		x = 0;
		while (map[y][x] != '\0')
		{
			if (map[y][x] == 'E')
				return (c_exit(map, x, y));
			x++;
		}
		y++;
	}
	return (0);
}

int v_coin(char **map)
{
	int x;
	int y;

	y = 0;
	while (map[y] != '\0')
	{
		x = 0;
		while (map[y][x] != '\0')
		{
			if (map[y][x] == 'C')
				return (0);
			x++;
		}
		y++;
	}
	return (1);
}

void valid_path(t_path *path)
{
	path_position(path);
	flood_fill(path->map, path->player_x, path->player_y);
	if (v_exit(path->map) == 0 || v_coin(path->map) == 0)
	{
		printf("invalide path\n");
		exit(0);
	}
	else 
	{
		printf("valide Path\n");
	} 
}