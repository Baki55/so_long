/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:35:52 by bkhatib           #+#    #+#             */
/*   Updated: 2022/05/31 20:12:33 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	main(int argc, char **argv)
{
	t_program	game;
	
	if (argc != 2)
	{
		write(1, "Usage: ./so_long maps_bonus/[name_of_the_map].ber\n", 44);
		exit(EXIT_FAILURE);
	}
	check_map(argv[1], &game);
	init_game(&game);
	mlx_hook(game.win_ptr, 17, 0, *close_window, &game);
	render_images(game);
	mlx_hook(game.win_ptr, 2, 0, *input_player, &game);
	mlx_loop(game.mlx_ptr);
	
	return (0);
}