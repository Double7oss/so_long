/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 19:57:33 by hel-kadd          #+#    #+#             */
/*   Updated: 2023/02/08 16:26:13 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	empty(char *line)
{
	if (line[0] == '\n')
	{
		ft_printf("Error, Empty line\n");
		exit(-1);
	}
}

char	**read_map(char *path)
{
	int		fd;
	char	*line;
	char	**map;
	char	*h_map;
	char	*holder;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (NULL);
	h_map = ft_strdup("");
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		holder = h_map;
		empty(line);
		h_map = ft_strjoin_so_long(holder, line);
		free(holder);
		free(line);
	}
	map = ft_split(h_map, '\n');
	free(h_map);
	close(fd);
	return (map);
}
