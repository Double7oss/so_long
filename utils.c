/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:02:56 by hel-kadd          #+#    #+#             */
/*   Updated: 2023/02/05 18:21:22 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*ft_strcat_so_long(char *dest, const char *src)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

char	*ft_strjoin_so_long(char const *s1, char const *s2)
{
	size_t	ls1;
	size_t	ls2;
	char	*str;

	if (s1 == 0 || s2 == 0)
		return (NULL);
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (ls1 + ls2 + 1));
	if (!str)
		return (NULL);
	str[0] = '\0';
	str = ft_strcat_so_long(str, s1);
	str = ft_strcat_so_long(str, s2);
	return (str);
}

void path_position(t_path *path)
{
	int x;
	int y;
	
	y = 0;
	while (path->map[y] != '\0')
	{
		x = 0;
		while (path->map[y][x] != '\0')
		{
			if (path->map[y][x] == 'P')
			{
				path->player_x = x;
				path->player_y = y;
			}
			x++;
		}
		y++;
	}
}