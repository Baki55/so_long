/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:00:49 by bkhatib           #+#    #+#             */
/*   Updated: 2022/05/22 22:13:58 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	check_map(char *file_name, t_program *game)
{
	if (check_extention(file_name, ".ber") != 0)
		err_extension();
	get_map(file_name, game);
	if (check_char(file_name, game) == 1)
		err_char(game);
	if (check_rectangular(*game) == 1)
		err_rectangular(game);
	if (check_exit(*game) == 1)
		err_exit(game);
	if (check_collectible(*game) == 1)
		err_collectible(game);
	if (check_player(*game) == 1)
		err_player(game);
	if (check_closed(file_name, game) == 1)
		err_closed(game);
}