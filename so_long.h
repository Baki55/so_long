/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 12:50:40 by bkhatib           #+#    #+#             */
/*   Updated: 2022/05/26 21:57:11 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include <sys/stat.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

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
	t_vector	pos_player;
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
	size_t		mv_count;
}				t_program;

// utils functions:
int	ft_strchr(char *str, char c);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *str);
int	in_set(char c);
char	*get_next_line(int fd);
int	map_len(int fd);
void	get_map(char *file_name, t_program *game);
int	ft_strcmp(const char *s1, const char *s2);

//checker functions:
void	check_map(char *file_name, t_program *game);
int	check_extention(const char *file_name, const char *extension);
int	check_char(t_program game);
int	check_rectangular(t_program game);
int	check_ecp(t_program game);
int	check_closed(t_program game);

//error functions:
void	err_extension();
void	err_char(t_program *game);
void	err_rectangular(t_program *game);
void	err_ecp(t_program *game);
void	err_closed(t_program *game);

//free functions:
void	free_map(t_program *game);