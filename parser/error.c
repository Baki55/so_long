/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 21:09:18 by bkhatib           #+#    #+#             */
/*   Updated: 2022/06/01 22:12:40 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	err_char(t_program *game)
{
	write(1, "Error\n", 6);
	write(1, "Invalid character found.\n", 25);
	free_map(game);
	exit(EXIT_FAILURE);
}

void	err_rectangular(t_program *game)
{
	write(1, "Error\n", 6);
	write(1, "The map isn't rectangular.\n", 27);
	free_map(game);
	exit(EXIT_FAILURE);
}

void	err_ecp(t_program *game)
{
	write(1, "Error\n", 6);
	write(1, "There's no exit a/r collectible a/r player in the map.\n", 55);
	free_map(game);
	exit(EXIT_FAILURE);
}

void	err_closed(t_program *game)
{
	write(1, "Error\n", 6);
	write(1, "The map isn't closed.\n", 22);
	free_map(game);
	exit(EXIT_FAILURE);
}

void	err_player(t_program *game)
{
	write(1, "Error\n", 6);
	write(1, "More than one player.\n", 21);
	free_map(game);
	exit(EXIT_FAILURE);
}
