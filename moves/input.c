/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 22:20:41 by bkhatib           #+#    #+#             */
/*   Updated: 2022/06/01 22:24:19 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	input_player(int key, void *param)
{
	t_program	*game;
	char		*mv_count_str;

	game = (t_program *)param;
	if (key == 53)
		free_game(game, "Quitting the game");
	else if (key == 13)
		move_up(game);
	else if (key == 1)
		move_down(game);
	else if (key == 2)
		move_right(game);
	else if (key == 0)
		move_left(game);
	mlx_clear_window(game->mlx_ptr, game->win_ptr);
	render_images(*game);
	mv_count_str = ft_itoa(game->mv_count);
	ft_putstr_fd(mv_count_str, 1);
	write(1, "\n", 1);
	free(mv_count_str);
	return (0);
}
