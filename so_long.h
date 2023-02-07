/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 21:58:33 by hel-kadd          #+#    #+#             */
/*   Updated: 2023/02/07 22:23:42 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
#define SO_LONG_H

#include <mlx.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
# include <stdarg.h>

typedef struct s_path {
	char **map;
	int player_x;
	int player_y;
}	t_path;

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
	int nc;
	int player_x;
	int player_y;
	int map_h;
	int map_w;
	int moves;
	int end;
}	t_game;

# define KEY_W 13
# define KEY_A 0
# define KEY_D 2
# define KEY_S 1
# define KEY_UP 126
# define KEY_DOWN 125
# define KEY_LEFT 123
# define KEY_RIGHT 124
# define KEY_ESC 53
# define KEY_Q 12

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
//keys
void _w(t_game *game);
void _s(t_game *game);
void _a(t_game *game);
void _d(t_game *game);
void gameplaye(t_game *game);
//path
void path_position(t_path *path);
void valid_path(t_path *path);
//valide map
void valide_map(char **map);
int check_ber(char *av);
int check_empty_line(char **map);
//ft_printf
int		ft_printf(const char *str, ...);
int		print_mhex(unsigned int n);
int		printhex(size_t n);
int		c_hex(unsigned int c);
int		c_dec(int n);
int		ft_printchar(char c);
int		printstr(const char *s);
int		printnbr(int n);
int		printunbr(unsigned int n);
int		printvp(unsigned long n);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(const char *s);
void	ft_print_mhex(unsigned int n);
void	ft_printhex(unsigned long n);
void	ft_putunbr(unsigned int n);
int		ft_printf_spec(const char *s, va_list ap, int i);


int press_button(int keycode, t_game *game);

#endif
