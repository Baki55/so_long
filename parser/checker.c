/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:00:49 by bkhatib           #+#    #+#             */
/*   Updated: 2022/05/26 21:18:54 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	check_map(char *file_name, t_program *game)
{
	if (check_extention(file_name, ".ber") != 0)
		err_extension();
	get_map(file_name, game);
	if (check_char(*game) == 1)
		err_char(game);
	if (check_rectangular(*game) == 1)
		err_rectangular(game);
	if (check_ecp(*game) == 0)
		err_ecp(game);
	if (check_closed(*game) == 1)
		err_closed(game);
	write(1, "Ok :)", 5);
}