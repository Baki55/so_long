/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup_animation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:35:07 by bkhatib           #+#    #+#             */
/*   Updated: 2022/06/09 14:52:08 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	setup_animation(t_program *game, char *direction)
{
	if (ft_strcmp(direction, "up") == 0)
	{
		game->map.map[game->map.player.x - 1][game->map.player.y] = 'A';
		game->is_explosion = 1;
	}
	else if (ft_strcmp(direction, "down") == 0)
	{
		game->map.map[game->map.player.x + 1][game->map.player.y] = 'A';
		game->is_explosion = 1;
	}
	else if (ft_strcmp(direction, "left") == 0)
	{
		game->map.map[game->map.player.x][game->map.player.y - 1] = 'A';
		game->is_explosion = 1;
	}
	else if (ft_strcmp(direction, "right") == 0)
	{
		game->map.map[game->map.player.x][game->map.player.y + 1] = 'A';
		game->is_explosion = 1;
	}
}