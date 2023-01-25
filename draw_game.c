/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 23:09:24 by hel-kadd          #+#    #+#             */
/*   Updated: 2023/01/25 23:42:30 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void dr_img(t_game *game, void img, int x, int y)
{
	mlx_put_image_to_window(game->mlx, game->win, img, x, y);
}