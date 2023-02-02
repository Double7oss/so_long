/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 21:58:33 by hel-kadd          #+#    #+#             */
/*   Updated: 2023/02/01 18:13:03 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
#define SO_LONG_H

#include <mlx.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>



typedef struct s_game {
	void *mlx;
	void *win;
	int img_width;
	int img_hight;
	void *img_p;
	void *img_c;
	void *img_e;
	void *img_w;
	void *img_field;
	char **map;
	int flag_e;
	int flag_p;
	int nc;
	int player_x;
	int player_y;
	int map_h;
	int map_w;
	int moves;
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
//draw
int dr_map(t_game *game);
//exit
int exit_game(t_game *game);
//initial game
void initial_game(t_game *game);
void initial_image(t_game *gimg);
//read map
char **read_map(char *path);
//utils
char	*ft_strjoin_so_long(char const *s1, char const *s2);
char	*ft_strcat_so_long(char *dest, const char *src);

#endif
