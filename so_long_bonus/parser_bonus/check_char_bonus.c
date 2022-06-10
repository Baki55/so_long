/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_char_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 21:58:45 by bkhatib           #+#    #+#             */
/*   Updated: 2022/06/09 14:59:31 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

int	check_char(t_program game)
{
	int	row;
	int	col;

	row = 0;
	while (game.map.map[row] != NULL)
	{
		col = 0;
		while (game.map.map[row][col] != '\n' && game.map.map[row][col] != '\0')
		{
			if (in_set(game.map.map[row][col]) == 1)
				return (1);
			col++;
		}
		row++;
	}
	return (0);
}
