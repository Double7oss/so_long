/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 19:09:54 by hel-kadd          #+#    #+#             */
/*   Updated: 2023/02/01 17:28:32 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void _w(t_game *game)
{
	if (game->map[game->player_y][game->player_y] == 'E' && game->nc == 0)
	{
		mlx_clear_window(game->mlx, game->win);
		game->map[game->player_y + 1][game->player_x] = '0';
		game->moves += 1;
		dr_map(game);
	}
	else if (game->map[game->player_y][game->player_x] == 'E'
			|| game->map[game->player_y][game->player_x] == '1')
	{
		game->player_y += 1;
	}
	else 
	{
		mlx_clear_window(game->mlx, game->win);
		if (game->map[game->player_y][game->player_x] == 'C')
		{
			game->map[game->player_y][game->player_x] = 'P';
			game->map[game->player_y + 1][game->player_x] = '0';
			game->nc -= 1;
			game->moves += 1;
			dr_map(game);
		}
	}
}

void _s(t_game *game)
{
	if (game->map[game->player_y][game->player_y] == 'E' && game->nc == 0)
	{
		mlx_clear_window(game->mlx, game->win);
		game->map[game->player_y - 1][game->player_x] = '0';
		game->moves += 1;
		dr_map(game);
	}
	else if (game->map[game->player_y][game->player_x] == 'E'
			|| game->map[game->player_y][game->player_x] == '1')
	{
		game->player_y -= 1;
	}
	else 
	{
		mlx_clear_window(game->mlx, game->win);
		if (game->map[game->player_y][game->player_x] == 'C')
		{
			game->map[game->player_y][game->player_x] = 'P';
			game->map[game->player_y - 1][game->player_x] = '0';
			game->nc -= 1;
			game->moves += 1;
			dr_map(game);
		}
	}
}

void _d(t_game *game)
{
	if (game->map[game->player_y][game->player_x] == 'E' && game->nc == 0)
	{
		mlx_clear_window(game.mlx, game->win);
		game->map[game->player_y][game->player_x - 1] = '0';
		game->moves += 1;
		dr_map(game);
	}
	else if (game->map[game->player_y][game->player_x] == 'E' 
			|| game->map[game->player_y][game->player_x] == '1')
		game->player_y -= 1;
	else 
	{
		mlx_clear_window(game->mlx, game->win);
		if (game->map[game->player_y][game->player_x] == 'C')
		{
			game->map[game->player_y][game->player_y] == 'P';
			game->map[game->player_y][game->player_x - 1] == '0';
			game->moves += 1;
			game->nc -= 1;
			dr_map(game);
		}
	}
}

void _a(t_game *game)
{
	if (game->map[game->player_y][game->player_x] == 'E' && game->nc == 0)
	{
		mlx_clear_window(game.mlx, game->win);
		game->map[game->player_y][game->player_x + 1] = '0';
		game->moves += 1;
		dr_map(game);
	}
	else if (game->map[game->player_y][game->player_x] == 'E' 
			|| game->map[game->player_y][game->player_x] == '1')
		game->player_y += 1;
	else 
	{
		mlx_clear_window(game->mlx, game->win);
		if (game->map[game->player_y][game->player_x] == 'C')
		{
			game->map[game->player_y][game->player_y] == 'P';
			game->map[game->player_y][game->player_x + 1] == '0';
			game->moves += 1;
			game->nc -= 1;
			dr_game(game);
		}
	}
}