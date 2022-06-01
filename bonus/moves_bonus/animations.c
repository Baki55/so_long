/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 12:49:41 by bkhatib           #+#    #+#             */
/*   Updated: 2022/06/01 17:00:04 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

int animations(t_program *game)
{
	if (game->is_explosion)
	{
		usleep(100000);
		free_game(game, " ");
	}
	return (1);
}