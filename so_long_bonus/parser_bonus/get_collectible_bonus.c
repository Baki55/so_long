/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_collectible_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 23:52:49 by bkhatib           #+#    #+#             */
/*   Updated: 2022/06/09 15:03:55 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	get_collectible(t_program *game)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (game->map.map[x])
	{
		while (game->map.map[x][y])
		{
			if (game->map.map[x][y] == 'C')
				game->map.collectibles++;
			y++;
		}
		x++;
		y = 0;
	}
}
