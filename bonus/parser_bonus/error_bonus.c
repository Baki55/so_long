/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 21:09:18 by bkhatib           #+#    #+#             */
/*   Updated: 2022/06/09 15:10:43 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	err_extension(void)
{
	write(1, "Error\n", 6);
	write(1, "Invalid file extension.\n", 24);
	exit(EXIT_FAILURE);
}

void	err_char(void)
{
	write(1, "Error\n", 6);
	write(1, "Invalid character found.\n", 25);
	exit(EXIT_FAILURE);
}

void	err_rectangular(void)
{
	write(1, "Error\n", 6);
	write(1, "The map isn't rectangular.\n", 27);
	exit(EXIT_FAILURE);
}

void	err_ecp(void)
{
	write(1, "Error\n", 6);
	write(1, "There's no exit a/r collectible a/r player in the map.\n", 55);
	exit(EXIT_FAILURE);
}

void	err_closed(void)
{
	write(1, "Error\n", 6);
	write(1, "The map isn't closed.\n", 22);
	exit(EXIT_FAILURE);
}

void	err_player(void)
{
	write(1, "Error\n", 6);
	write(1, "More than one player.\n", 21);
	exit(EXIT_FAILURE);
}
