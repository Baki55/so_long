/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:35:52 by bkhatib           #+#    #+#             */
/*   Updated: 2022/05/26 17:58:09 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <stdio.h>

int 	check_closed(t_program game)
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
			{
				if (game.map.map[i][j] != '1')
					printf("%c\n", game.map.map[i][j]);
				j++;
			}
			if (j == 0 || j == game.map.col - 1)
			{
				if (game.map.map[i][j] != '1')
					printf("%c\n", game.map.map[i][j]);
				j++;
			}
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	t_program	game;
	get_map("maps/not_closed_map.ber", &game);
	//printf("%d", check_closed(game));
}