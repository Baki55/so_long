/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ecp_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:53:41 by bkhatib           #+#    #+#             */
/*   Updated: 2022/06/09 15:00:21 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

int	check_ecp(t_program game)
{
	int	e;
	int	c;
	int	p;
	int	i;

	i = 0;
	e = 0;
	c = 0;
	p = 0;
	while (game.map.map[i])
	{
		if (ft_strchr(game.map.map[i], 'E') == 1)
			e = 1;
		if (ft_strchr(game.map.map[i], 'C') == 1)
			c = 1;
		if (ft_strchr(game.map.map[i], 'P') == 1)
			p = 1;
		i++;
	}
	return (e && c && p);
}
