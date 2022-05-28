/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:35:52 by bkhatib           #+#    #+#             */
/*   Updated: 2022/05/28 15:40:32 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <stdio.h>

int	main(void)
{

	t_program	game;
	int	x;
	int	y;
	
	x = 0;
	y = 0;
	check_map("maps/map1.ber", &game);
	//printf("%d", game.map.collectibles);
	get_collectible(&game);
	game.mlx_ptr = mlx_init();
	game.win_ptr = mlx_new_window(game.mlx_ptr, ft_strlen(game.map.map[0]) * 32, game.map.row * 32, "SO_LONG");
	ft_render_images(game);
	mlx_loop(game.mlx_ptr);
}