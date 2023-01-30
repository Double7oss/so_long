/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 19:09:54 by hel-kadd          #+#    #+#             */
/*   Updated: 2023/01/29 19:31:33 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void player_img_updat(int key,t_game *game)
{
	mlx_destroy_image(game->mlx, game->img_p);
	if (game->map[game->map_h][game->map_w] == 'w')
		gimg->img_p =  mlx_xpm_file_to_image(gimg->mlx, "./imgs/player.xpm", &gimg->img_width, &gimg->img_hight);
	else if (game->map[game->map_h][game->map_w] == 'a')
		gimg->img_p =  mlx_xpm_file_to_image(gimg->mlx, "./imgs/player.xpm", &gimg->img_width, &gimg->img_hight);
	else if (game->map[game->map_h][game->map_w] == 'd')
		gimg->img_p =  mlx_xpm_file_to_image(gimg->mlx, "./imgs/player.xpm", &gimg->img_width, &gimg->img_hight);
	else if (game->map[game->map_h][game->map_w] == 's')
		gimg->img_p =  mlx_xpm_file_to_image(gimg->mlx, "./imgs/player.xpm", &gimg->img_width, &gimg->img_hight);
}