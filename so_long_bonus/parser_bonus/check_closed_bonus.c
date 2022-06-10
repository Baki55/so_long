/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_closed_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 20:42:58 by bkhatib           #+#    #+#             */
/*   Updated: 2022/06/10 13:08:28 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

int	check_closed(t_program game)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	game.map.col = ft_strlen(game.map.map[0]);
	while (i < game.map.row)
	{
		j = 0;
		while (j < game.map.col)
		{
			if (i == 0 || i == game.map.row - 1)
				if (game.map.map[i][j] != '1')
					return (1);
			if (j == 0 || j == game.map.col - 1)
				if (game.map.map[i][j] != '1')
					return (1);
			j++;
		}
		i++;
	}
	return (0);
}
