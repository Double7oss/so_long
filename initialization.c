/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:24:37 by hel-kadd          #+#    #+#             */
/*   Updated: 2023/01/24 18:27:04 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void initial_image(t_game *gimg)
{
	gimg->img_c = mlx_xpm_to_image(gimg->mlx, "./imgs/coine.xpm", &gimg->img_width, &gimg->img_hight);
	gimg->img_p = mlx_xpm_to_image(gimg->mlx, "./imgs/player.xpm", &gimg->img_width, &gimg->img_hight);
	gimg->img_e = mlx_xpm_to_image(gimg->mlx, "./imgs/door.xpm", &gimg->img_width, &gimg->img_hight);
}