/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 21:54:32 by bkhatib           #+#    #+#             */
/*   Updated: 2022/05/29 14:15:55 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	free_map(t_program *game)
{
	int	i;
	
	i = 0;
	while (game->map.map[i])
		free(game->map.map[i++]);
	free(game->map.map);
}

void	free_game(t_program *game, char *msg)
{
	int	i;

	i = 0;
	free_map(game);
	mlx_destroy_window(game->mlx_ptr, game->win_ptr);
	if (ft_strcmp(msg, "BRAVO!") == 0)
		write(1, "Bravo :)", 8);
	else
		write(1, "Quitting the game", 17);
	system("leaks so_long");
	exit(EXIT_SUCCESS);
}

int	close_window(t_program *game)
{
	free_game(game, "Window closed.");
	return (0);
}