/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 21:09:18 by bkhatib           #+#    #+#             */
/*   Updated: 2022/05/22 21:42:00 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	err_extension(char *file_name)
{
	write(1, "Invalid file extension", 22);
	exit(EXIT_FAILURE);
}

void	err_char(char *file_name)
{
	write(1, "Invalid character found", 23);
}

void	err_rectangular(t_program game)
{
	write(1, "The map isn't rectangular", 25);
}

void	err_exit(t_program game)
{
	write(1, "There's no exit in the map", 26);
}

void	err_collectible(t_program game)
{
	write(1, "There's no collectible in the map", 33);
}

void	err_player(t_program game)
{
	write(1, "There's no player in the map", 28);
}

void	err_closed(t_program game)
{
	write(1, "The map isn't closed", 20);
}