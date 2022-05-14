/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 12:50:40 by bkhatib           #+#    #+#             */
/*   Updated: 2022/05/14 13:02:22 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"

typedef struct s_vector
{
	int	x;
	int	y;
}				t_vector;

// all info needed for the map
typedef struct s_map
{
	char		**map;
	int			col;
	int			row;
	int			collectibles;
	t_vector	pos_player;
}				t_map;

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