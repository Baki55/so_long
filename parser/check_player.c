/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_player.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:38:16 by bkhatib           #+#    #+#             */
/*   Updated: 2022/05/30 13:50:03 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	check_player(t_program game)
{
	int	i;
	int	nbr_player;

	i = 0;
	nbr_player = 0;
	while (game.map.map[i])
	{
		if (ft_strchr(game.map.map[i], 'P') == 1)
			nbr_player++;
		i++;
	}
	if (nbr_player != 1)
		return (0);
	return (1);
}