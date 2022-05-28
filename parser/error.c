/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 21:09:18 by bkhatib           #+#    #+#             */
/*   Updated: 2022/05/28 18:21:40 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	err_extension()
{
	write(1, "Invalid file extension", 22);
	exit(EXIT_FAILURE);
}

void	err_char()
{
	write(1, "Invalid character found", 23);
	exit(EXIT_FAILURE);
}

void	err_rectangular()
{
	write(1, "The map isn't rectangular", 25);
	exit(EXIT_FAILURE);
}

void	err_ecp()
{
	write(1, "There's no exit and/or collectible and/or player in the map", 59);
	exit(EXIT_FAILURE);
}

void	err_closed()
{
	write(1, "The map isn't closed", 20);
	exit(EXIT_FAILURE);
}