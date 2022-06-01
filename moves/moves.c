/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 20:05:49 by bkhatib           #+#    #+#             */
/*   Updated: 2022/06/01 22:42:08 by bkhatib          ###   ########.fr       */
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
		game->mv_count++;
	}
	else if (game->map.map[game->map.player.x - 1][game->map.player.y] == 'E'
		&& !game->map.collectibles)
	{
		game->mv_count++;
		put_mv_count(game);
		free_game(game, "BRAVO!");
	}
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
		game->mv_count++;
	}
	else if (game->map.map[game->map.player.x + 1][game->map.player.y] == 'E'
		&& !game->map.collectibles)
	{
		game->mv_count++;
		put_mv_count(game);
		free_game(game, "BRAVO!");
	}
}

void	move_left(t_program *game)
{
	game->mv_right = -1;
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
		game->mv_count++;
	}
	else if (game->map.map[game->map.player.x][game->map.player.y - 1] == 'E'
		&& !game->map.collectibles)
	{
		game->mv_count++;
		put_mv_count(game);
		free_game(game, "BRAVO!");
	}
}

void	move_right(t_program *game)
{
	game->mv_right = 0;
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
		game->mv_count++;
	}
	else if (game->map.map[game->map.player.x][game->map.player.y + 1] == 'E'
		&& !game->map.collectibles)
	{
		game->mv_count++;
		put_mv_count(game);
		free_game(game, "BRAVO!");
	}
}
