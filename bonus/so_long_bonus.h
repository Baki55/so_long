/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 12:50:40 by bkhatib           #+#    #+#             */
/*   Updated: 2022/06/10 13:50:35 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H

# include "mlx.h"
# include <sys/errno.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct s_vector
{
	int	x;
	int	y;
}				t_vector;

// all info needed for the map:
typedef struct s_map
{
	char		**map;
	int			col;
	int			row;
	int			collectibles;
	t_vector	player;
}				t_map;

// all info needed for the game: 
typedef struct s_program
{
	void		*mlx_ptr;
	void		*win_ptr;
	void		*img_ptr;
	int			img_size;
	t_map		map;
	int			fd;
	int			can_exit;
	int			mv_count;
	int			mv_right;
	int			is_explosion;
}				t_program;

// utils functions:
size_t	len_nbr(int n);
char	*ft_itoa(int c);
void	ft_swap(char *a, char *b);
int		ft_strchr(char *str, char c);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *str);
int		in_set(char c);
char	*get_next_line(int fd);
int		map_len(int fd);
void	get_map(char *file_name, t_program *game);
int		ft_strcmp(const char *s1, const char *s2);
void	get_collectible(t_program *game);
void	get_player_position(t_program *game);

//checker functions:
void	check_map(char *file_name, t_program *game);
int		check_extention(const char *file_name, const char *extension);
int		check_char(t_program game);
int		check_rectangular(t_program game);
int		check_ecp(t_program game);
int		check_closed(t_program game);
int		check_player(t_program game);

//error functions:
void	err_extension(void);
void	err_char(t_program *game);
void	err_rectangular(t_program *game);
void	err_ecp(t_program *game);
void	err_closed(t_program *game);
void	err_player(t_program *game);

//init functions:
void	init_game(t_program *game);

//rendering functions:
char	*get_image(char c, int can_exit, int mv_right);
void	render_images_action(t_program game, int x, int y);
void	render_images(t_program game);
char	*check_player_direction(int mv_right);
char	*check_door_isopen(int can_exit);

//free functions:
void	free_map(t_program *game);
void	free_game(t_program *game, char *msg);
int		close_window(t_program *game);

//moves functions:
void	move_up(t_program *game);
void	move_down(t_program *game);
void	move_left(t_program *game);
void	move_right(t_program *game);
int		input_player(int key, void *param);
int		animations(t_program *game);
void	setup_animation(t_program *game, char *direction);

#endif