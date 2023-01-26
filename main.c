/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 21:54:49 by hel-kadd          #+#    #+#             */
/*   Updated: 2023/01/26 17:59:14 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(void)
{
	char *a;
	char **map;

	a = "11110111\n10000001\n10000001\n10000001\n11111111";
	map = ft_split(a, '\n');
	//int i = 0;
	// while (map[i] != '\0')
	// {
	// 	printf("map[%d] = %s\n", i, map[i]);
	// 	i++;
	// }
	
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