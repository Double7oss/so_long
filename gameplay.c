/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gameplay.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:57:36 by hel-kadd          #+#    #+#             */
/*   Updated: 2023/02/06 17:12:55 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void player_events(int keycode, t_game *game)
{
	if (keycode == KEY_W || keycode == KEY_UP)
	{
		game->player_y--;
		_w(game);
	}
	else if (keycode == KEY_DOWN || keycode == KEY_S)
	{
		game->player_y++;
		_s(game);
	}
	else if (keycode == KEY_A || keycode == KEY_LEFT)
	{
		game->player_x -= 1;
		_a(game);
	}
	else if (keycode == KEY_D || keycode == KEY_RIGHT)
	{
		game->player_x += 1;
		_d(game);
	}
	printf("Moves: %d\n", game->moves);
}

int press_button(int keycode, t_game *game)
{
	if (!game->end)
		player_events(keycode, game);
	if (keycode == KEY_ESC || keycode == KEY_Q || game->end == 1)
		exit_game(game);
	return (0);
}
