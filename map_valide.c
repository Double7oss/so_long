/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_valide.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 18:48:25 by hel-kadd          #+#    #+#             */
/*   Updated: 2023/01/22 20:37:26 by hel-kadd         ###   ########.fr       */
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


int is_wall(char **map)
{
	int i;
	
}