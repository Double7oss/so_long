/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:47:08 by hel-kadd          #+#    #+#             */
/*   Updated: 2023/02/03 19:40:22 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void free_map(char **map)
{
	int i;
	
	i = 0;
	if (!map)
		return ;
	while (map[i] != '\0')
	{
		free(map[i]);
		i++;
	}
	free(map);
}


int exit_game(t_game *game)
{
	(void)game;
	// free_map(game->map);
	// mlx_destroy_image(game->mlx, game->img_field);
	// mlx_destroy_image(game->mlx, game->img_p);
	// mlx_destroy_image(game->mlx, game->img_w);
	// mlx_destroy_image(game->mlx, game->img_c);
	// mlx_destroy_image(game->mlx, game->img_e);
	// mlx_destroy_window(game->mlx, game->win);
	// free(game->mlx);
	exit(0);
	return (0);
}