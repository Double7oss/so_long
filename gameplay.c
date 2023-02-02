/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gameplay.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:57:36 by hel-kadd          #+#    #+#             */
/*   Updated: 2023/02/02 22:19:43 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void player_events(int keycode, t_game *game)
{
	if (keycode == KEY_W || keycode == KEY_UP)
	{
		game->player_y -= 1;
		_w(game);
	}
	else if (keycode == KEY_DOWN || keycode == KEY_S)
	{
		game->player_y += 1;
		_s(game);
	}
	else if (keycode == KEY_A || keycode == KEY_LEFT)
	{
		game->player_x -= 1;
		_a(game);
	}
	else if (keycode == KEY_D || keycode == KEY_RIGHT)
	{
		game->player_x -= 1;
		_d(game);
	}
}

int press_button(int keycode, t_game *game)
{
	if (keycode == KEY_ESC || keycode == KEY_Q)
		exit_game(game);
	else 
	{
		
	}
}