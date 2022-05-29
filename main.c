/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:35:52 by bkhatib           #+#    #+#             */
/*   Updated: 2022/05/29 02:06:37 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <stdio.h>

int	main(void)
{

	t_program	game;

	check_map("maps/map3.ber", &game);
	init_game(&game);
	mlx_hook(game.win_ptr, 17, 0, close_window, &game);
	render_images(game);
	mlx_hook(game.win_ptr, 2, 0, *input_player, &game);
	mlx_loop(game.mlx_ptr);
	
	return (0);
}