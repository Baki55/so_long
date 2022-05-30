/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:35:52 by bkhatib           #+#    #+#             */
/*   Updated: 2022/05/30 14:17:09 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(void)
{

	t_program	game;

	check_map("maps/map2.ber", &game);
	init_game(&game);
	mlx_hook(game.win_ptr, 17, 0, *close_window, &game);
	render_images(game);
	mlx_hook(game.win_ptr, 2, 0, *input_player, &game);
	mlx_loop(game.mlx_ptr);
	
	return (0);
}