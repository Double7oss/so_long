/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 23:09:24 by hel-kadd          #+#    #+#             */
/*   Updated: 2023/01/28 18:53:17 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void dr_img(t_game *game, void *img, int x, int y)
{
	printf("x = %d", x);
	printf("y = %d", y);
	mlx_put_image_to_window(game->mlx, game->win, img, x * 65, y * 65);
}

void dr_player(t_game *game, void *img, int x, int y)
{
	game->player_x = x;
	game->player_y = y;
	dr_img(game, img, x, y);
}

int dr_map(t_game *game)
{
	int x;
	int y;
	
	y = 0;
	while (game->map[y] != '\0')
	{
		x = 0;
		while (game->map[y][x] != '\0')
		{
			if (game->map[y][x] == '1')
				dr_img(game, game->img_w, x, y);
			else if (game->map[y][x] == '0')
				dr_img(game, game->img_field, x, y);
			else if (game->map[y][x] == 'C')
				dr_img(game, game->img_c, x, y);
			else if (game->map[y][x] == 'P')
				dr_player(game, game->img_p, x, y);
			else
				dr_img(game, game->img_e, x, y);
			x++;
		}
		y++;
	}
	return (0);
}