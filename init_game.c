/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 01:36:06 by bkhatib           #+#    #+#             */
/*   Updated: 2022/06/01 22:48:04 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_game(t_program *game)
{
	get_collectible(game);
	get_player_position(game);
	game->mlx_ptr = mlx_init();
	game->win_ptr = mlx_new_window(game->mlx_ptr,
			ft_strlen(game->map.map[0]) * 32, game->map.row * 32, "SO_LONG");
	game->img_size = 32;
	game->can_exit = -1;
	game->mv_count = 0;
	game->mv_right = -1;
}
