/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 20:05:49 by bkhatib           #+#    #+#             */
/*   Updated: 2022/05/28 20:22:26 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	move_up(t_program *game)
{
	if (game->map.map[game->map.player.x - 1][game->map.player.y] == '0')
	{
		ft_swap(&game->map.map[game->map.player.x - 1][game->map.player.y],
			&game->map.map[game->map.player.x][game->map.player.y]);
		game->map.player.x--;
		game->mv_count++;
	}
	else if (game->map.map[game->map.player.x - 1][game->map.player.y] == 'C')
	{
		game->map.collectibles--;
		game->map.map[game->map.player.x][game->map.player.y] = '0';
		game->map.map[game->map.player.x - 1][game->map.player.y] = 'P';
		game->map.player.x--;
	}
	else if (game->map.map[game->map.player.x - 1][game->map.player.y] == 'E'
		&& !game->map.collectibles)
		free_game(game, "BRAVO!");
}

void	move_down(t_program *game)
{
	if (game->map.map[game->map.player.x + 1][game->map.player.y] == '0')
	{
		ft_swap(&game->map.map[game->map.player.x + 1][game->map.player.y],
			&game->map.map[game->map.player.x][game->map.player.y]);
		game->map.player.x++;
		game->mv_count++;
	}
	else if (game->map.map[game->map.player.x + 1][game->map.player.y] == 'C')
	{
		game->map.collectibles--;
		game->map.map[game->map.player.x][game->map.player.y] = '0';
		game->map.map[game->map.player.x + 1][game->map.player.y] = 'P';
		game->map.player.x++;
	}
	else if (game->map.map[game->map.player.x + 1][game->map.player.y] == 'E'
		&& !game->map.collectibles)
		free_game(game, "BRAVO!");
}

void	move_left(t_program *game)
{
	if (game->map.map[game->map.player.x][game->map.player.y - 1] == '0')
	{
		ft_swap(&game->map.map[game->map.player.x][game->map.player.y - 1],
			&game->map.map[game->map.player.x][game->map.player.y]);
		game->map.player.y--;
		game->mv_count++;
	}
	else if (game->map.map[game->map.player.x][game->map.player.y - 1] == 'C')
	{
		game->map.collectibles--;
		game->map.map[game->map.player.x][game->map.player.y] = '0';
		game->map.map[game->map.player.x][game->map.player.y - 1] = 'P';
		game->map.player.y--;
	}
	else if (game->map.map[game->map.player.x][game->map.player.y - 1] == 'E'
		&& !game->map.collectibles)
		free_game(game, "BRAVO!");
}

void	move_right(t_program *game)
{
	if (game->map.map[game->map.player.x][game->map.player.y + 1] == '0')
	{
		ft_swap(&game->map.map[game->map.player.x][game->map.player.y + 1],
			&game->map.map[game->map.player.x][game->map.player.y]);
		game->map.player.y++;
		game->mv_count++;
	}
	else if (game->map.map[game->map.player.x][game->map.player.y + 1] == 'C')
	{
		game->map.collectibles--;
		game->map.map[game->map.player.x][game->map.player.y] = '0';
		game->map.map[game->map.player.x][game->map.player.y + 1] = 'P';
		game->map.player.y++;
	}
	else if (game->map.map[game->map.player.x][game->map.player.y + 1] == 'E'
		&& !game->map.collectibles)
		free_game(game, "BRAVO!");
}

int	input_player(int key, void *param)
{
	t_program	*game;
	
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
	return (0);
}