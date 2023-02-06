/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 23:09:24 by hel-kadd          #+#    #+#             */
/*   Updated: 2023/02/05 16:50:53 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void dr_img(t_game *game, void *img, int x, int y)
{
	mlx_put_image_to_window(game->mlx, game->win, img, x * 65, y * 65);
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
			{
				game->player_x = x;
				game->player_y = y;
				dr_img(game, game->img_p, x, y);
			}
			else
				dr_img(game, game->img_e, x, y);
			x++;
		}
		y++;
	}
	return (0);
}