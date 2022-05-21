/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:00:49 by bkhatib           #+#    #+#             */
/*   Updated: 2022/05/21 21:50:32 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	check_map(char *file_name, t_program *game)
{
	if (check_extention(file_name, ".ber") == 1)
		err_etension(file_name);
	get_map(file_name, game);
	if (check_rectangular(*game) == 1)
		err_rectangular(file_name, game);
	if (check_exit(*game) == 1)
		err_exit(file_name, game);
	if (check_collectible(*game) == 1)
		err_collectible(file_name, game);
	if (check_player(*game) == 1)
		err_player(file_name, game);
}