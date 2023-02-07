/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 21:54:49 by hel-kadd          #+#    #+#             */
/*   Updated: 2023/02/07 22:29:13 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_mas(char **map)
{
	for (int i = 0; map[i]; i++)
		printf("%s\n", map[i]);
	
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		t_game game;
		t_path path;
		
		
		if (check_ber(av[1]) == 0)
		{
			ft_printf("Error\n");
			exit(-1);
		}	
		path.map = read_map(av[1]);
		check_mas(path.map);
		valide_map(path.map);
		valid_path(&path);
		game.map = read_map(av[1]);
		initial_game(&game);
	}
	
	
}
	// t_game vars;
	
	// vars.mlx = mlx_init();
	// vars.win = mlx_new_window(vars.mlx, 1920, 1080, "hello world!");
	// mlx_hook(vars.win, 17, 1L<<0, ft_close, &vars);
	// mlx_loop(vars.mlx);
	// void *mlx;
	// void *mlx_win;
	// t_data img;

	// mlx = mlx_init();
	// mlx_win = mlx_new_window(mlx, 1920, 1080, "heyy");
	// img.img = mlx_new_image(mlx, 1920, 1080);
	// img.addr = mlx_get_data_addr(img.img, &img.bpp, &img.line_length, &img.endian);
	
	// my_mlx_pixel_put(&img, 5, 5,0x0000FF00);
	// mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	// mlx_loop(mlx);