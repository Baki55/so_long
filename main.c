/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:35:52 by bkhatib           #+#    #+#             */
/*   Updated: 2022/05/21 23:35:31 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "so_long.h"
#include <stdio.h>

void	get_map(char *file_name, t_program *game)
{
	int	fd;
	int	i;
	
	i = 0;
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		write(1, "No such a file or directory", 27);
	game->map.row = map_len(fd);
	printf("%d", game->map.row);
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
		printf("%s", game->map.map[i]);
		i++;
	}
	close(fd);
}

int	main(void)
{
	// void	*mlx_ptr;
	// void	*window_ptr;
	
	// mlx_ptr = mlx_init();
	// window_ptr = mlx_new_window(mlx_ptr, 512, 512, "SO_LONG");
	// mlx_loop(mlx_ptr);
	t_program	game;
	get_map("maps/map1.ber", &game);
}