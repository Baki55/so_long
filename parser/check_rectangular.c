/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rectangular.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 22:11:26 by bkhatib           #+#    #+#             */
/*   Updated: 2022/05/26 21:13:44 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	check_rectangular(t_program game)
{
	int	row;
	int	len;
	int	line_len;

	row = 0;
	line_len = ft_strlen(game.map.map[row]);
	while (game.map.map[row] != NULL)
	{
		len = ft_strlen(game.map.map[row]);
		if (line_len != len)
			return (1);
		row++;
	}
	return (0);
}