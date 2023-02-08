/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:24:37 by hel-kadd          #+#    #+#             */
/*   Updated: 2023/02/08 18:56:28 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	count_coin(t_game *game)
{
	int	x;
	int	y;

	y = 0;
	while (game->map[y] != '\0')
	{
		x = 0;
		while (game->map[y][x] != '\0')
		{
			if (game->map[y][x] == 'C')
				game->nc++;
			x++;
		}
		y++;
	}
}

void	initial_image(t_game *gimg)
{
	gimg->img_c = mlx_xpm_file_to_image(gimg->mlx,
			"./imgs/coine.xpm", &gimg->img_width, &gimg->img_hight);
	gimg->img_p = mlx_xpm_file_to_image(gimg->mlx,
			"./imgs/player.xpm", &gimg->img_width, &gimg->img_hight);
	gimg->img_e = mlx_xpm_file_to_image(gimg->mlx,
			"./imgs/door.xpm", &gimg->img_width, &gimg->img_hight);
	gimg->img_w = mlx_xpm_file_to_image(gimg->mlx,
			"./imgs/wall.xpm", &gimg->img_width, &gimg->img_hight);
	gimg->img_field = mlx_xpm_file_to_image(gimg->mlx,
			"./imgs/field.xpm", &gimg->img_width, &gimg->img_hight);
	gimg->moves = 0;
	gimg->nc = 0;
	gimg->player_x = 0;
	gimg->player_y = 0;
	gimg->end = 0;
}

int	ft_exit(void)
{
	exit(0);
	return (0);
}

/*the hight and width of window*/
void	initial_win_szie(t_game *gsize)
{
	int	i;

	gsize->map_w = ft_strlen(gsize->map[0]) * 65;
	i = 0;
	while (gsize->map[i] != '\0')
		i++;
	gsize->map_h = i * 65;
}

void	initial_game(t_game *game)
{
	game->mlx = mlx_init();
	initial_win_szie(game);
	game->win = mlx_new_window(game->mlx, game->map_w, game->map_h, "so_long");
	initial_image(game);
	count_coin(game);
	dr_map(game);
	mlx_key_hook(game->win, press_button, game);
	mlx_hook(game->win, 17, (1L << 2), ft_exit, game);
	mlx_loop(game->mlx);
}
