/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 20:09:13 by hel-kadd          #+#    #+#             */
/*   Updated: 2023/02/08 16:45:28 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

char	*get_next_line(int fd)
{
	char	*str;
	char	buff;
	int		r;

	r = read(fd, &buff, 1);
	str = ft_strdup("");
	while (r > 0)
	{
		str = ft_strjoin(str, buff);
		if (buff == '\n')
			break ;
		r = read(fd, &buff, 1);
	}
	if (r < 0)
	{
		free(str);
		return (NULL);
	}
	if (r == 0 && str[0] == '\0')
	{
		free(str);
		return (NULL);
	}
	return (str);
}
