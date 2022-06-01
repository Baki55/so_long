/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 20:05:49 by bkhatib           #+#    #+#             */
/*   Updated: 2022/06/01 21:43:56 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	move_up(t_program *game)
{
	char	*mv_count_str;
	
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
		mv_count_str = ft_itoa(game->mv_count);
		ft_putstr_fd(mv_count_str, 1);
		write(1, "\n", 1);
		free(mv_count_str);
		free_game(game, "BRAVO!");
	}
}

void	move_down(t_program *game)
{
	char	*mv_count_str;
	
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
		mv_count_str = ft_itoa(game->mv_count);
		ft_putstr_fd(mv_count_str, 1);
		write(1, "\n", 1);
		free(mv_count_str);
		free_game(game, "BRAVO!");
	}
}

void	move_left(t_program *game)
{
	char	*mv_count_str;
	
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
		mv_count_str = ft_itoa(game->mv_count);
		ft_putstr_fd(mv_count_str, 1);
		write(1, "\n", 1);
		free(mv_count_str);
		free_game(game, "BRAVO!");
	}
}

void	move_right(t_program *game)
{
	char	*mv_count_str;
	
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
		mv_count_str = ft_itoa(game->mv_count);
		ft_putstr_fd(mv_count_str, 1);
		write(1, "\n", 1);
		free(mv_count_str);
		free_game(game, "BRAVO!");
	}
}

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
