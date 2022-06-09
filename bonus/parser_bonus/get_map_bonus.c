/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 18:12:52 by bkhatib           #+#    #+#             */
/*   Updated: 2022/06/09 15:04:04 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	get_map(char *file_name, t_program *game)
{
	int	fd;
	int	i;

	i = 0;
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		write(1, "No such a file or directory", 27);
		exit(EXIT_FAILURE);
	}
	game->map.row = map_len(fd);
	close(fd);
	game->map.map = malloc(sizeof(char *) * (game->map.row + 1));
	if (!game->map.map)
	{
		write(1, "Malloc error", 12);
		exit(EXIT_FAILURE);
	}
	game->map.map[game->map.row] = 0;
	fd = open(file_name, O_RDONLY);
	while (i < game->map.row)
	{
		game->map.map[i] = get_next_line(fd);
		i++;
	}
	close(fd);
}
