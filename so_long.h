/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 21:58:33 by hel-kadd          #+#    #+#             */
/*   Updated: 2023/01/23 19:30:53 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
#define SO_LONG_H

#include <mlx.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

typedef struct s_data {
	void *img;
	char *addr;
	int bpp;
	int line_length;
	int endian;
}	t_data;

typedef struct s_game {
	void *mlx;
	void *win;
	void **map;
	int x_pos;
	int y_pos;
}	t_game;


//valde map
int is_wall(char **map);
//split
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);

//get_next_line
size_t    ft_strlen(const char *c);
void    ft_strcat(char *s1, char *s2);
char    *ft_strjoin(char *s1, char c);
void    ft_strcpy(char *s1, const char *s2);
char    *ft_strdup(const char *s1);
char    *get_next_line(int fd);

#endif
