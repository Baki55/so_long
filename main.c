/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:35:52 by bkhatib           #+#    #+#             */
/*   Updated: 2022/05/25 22:52:40 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <stdio.h>

int	ft_strchr(char *str, char c)
{
	while (*str != '\0')
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

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
int	main(void)
{
	t_program	game;
	get_map("maps/map1.ber", &game);
	printf("%d", check_ecp(game));
}