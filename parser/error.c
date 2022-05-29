/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 21:09:18 by bkhatib           #+#    #+#             */
/*   Updated: 2022/05/29 18:09:40 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	err_extension()
{
	write(1, "Error\n", 6);
	write(1, "Invalid file extension.\n", 24);
	exit(EXIT_FAILURE);
}

void	err_char()
{
	write(1, "Error\n", 6);
	write(1, "Invalid character found.\n", 25);
	exit(EXIT_FAILURE);
}

void	err_rectangular()
{
	write(1, "Error\n", 6);
	write(1, "The map isn't rectangular.\n", 27);
	exit(EXIT_FAILURE);
}

void	err_ecp()
{
	write(1, "Error\n", 6);
	write(1, "There's no exit and/or collectible and/or player in the map.\n", 61);
	exit(EXIT_FAILURE);
}

void	err_closed()
{
	write(1, "Error\n", 6);
	write(1, "The map isn't closed.\n", 22);
	exit(EXIT_FAILURE);
}