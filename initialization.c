/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:24:37 by hel-kadd          #+#    #+#             */
/*   Updated: 2023/01/28 21:26:19 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void initial_image(t_game *gimg)
{
	gimg->img_c = mlx_xpm_file_to_image(gimg->mlx, "./imgs/coine.xpm", &gimg->img_width, &gimg->img_hight);
	gimg->img_p =  mlx_xpm_file_to_image(gimg->mlx, "./imgs/player.xpm", &gimg->img_width, &gimg->img_hight);
	gimg->img_e =  mlx_xpm_file_to_image(gimg->mlx, "./imgs/door.xpm", &gimg->img_width, &gimg->img_hight);
	gimg->img_w =  mlx_xpm_file_to_image(gimg->mlx, "./imgs/wall.xpm", &gimg->img_width, &gimg->img_hight);
	gimg->img_field =  mlx_xpm_file_to_image(gimg->mlx, "./imgs/field.xpm", &gimg->img_width, &gimg->img_hight);
}

/*the hight and width of window*/
void initial_win_szie(t_game *gsize)
{
	int i;
	gsize->map_w = ft_strlen(gsize->map[0]) * 65;
	i = 0;
	while (gsize->map[i] != '\0')
		i++;
	gsize->map_h = i * 65;
}

void initial_game(t_game *game)
{
	game->mlx = mlx_init();
	initial_win_szie(game);
	game->win = mlx_new_window(game->mlx, game->map_w, game->map_h, "so_long");
	game->moves = 0;
	initial_image(game);
	dr_map(game);
	mlx_loop(game->mlx);
}