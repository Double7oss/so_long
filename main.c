/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 21:54:49 by hel-kadd          #+#    #+#             */
/*   Updated: 2023/02/08 16:51:54 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{		
	t_game	game;
	t_path	path;

	if (ac == 2)
	{
		if (check_ber(av[1]) == 0)
		{
			ft_printf("Error\n");
			exit(-1);
		}	
		path.map = read_map(av[1]);
		valide_map(path.map);
		valid_path(&path);
		game.map = read_map(av[1]);
		initial_game(&game);
	}
}
