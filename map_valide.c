/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_valide.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 18:48:25 by hel-kadd          #+#    #+#             */
/*   Updated: 2023/01/23 21:57:28 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"


int is_rectangular(char **map)
{
	int i;
	
	i = 1;
	if (!map)
		return (0);
	while (map[i] != '\0')
	{
		if (ft_strlen(map[i]) != ft_strlen(map[0]))
			return (0);
		i++;
	}
	return (1);
}
int is_wall(char **map)
{
	int i;
	int j;
	int l;

	i = 0;
	j = 0;
	while (map[i] != '\0')
		i++;
	while (map[0][j] != '\0' && map[i - 1][j] != '\0')
	{
		if (map[0][j] != '1' || map[i - 1][j] != '1')
			return (0);
		j++;
	}
	i = 1;
	l = ft_strlen(map[i]);
	while (map[i] != '\0')
	{
		if (map[i][0] != '1' || map[i][l - 1] != '1')
			return (0);
		i++;
	}
	return (1);
}

// int check_double(char **map)
// {
// 	int i;
// 	int j;

// 	i = 0;
// 	j = 0;
// 	while (map[i] != '\0')
// 		i++;
// 	while ()
// }