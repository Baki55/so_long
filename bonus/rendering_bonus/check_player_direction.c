/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_player_direction.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:40:28 by bkhatib           #+#    #+#             */
/*   Updated: 2022/06/10 13:44:58 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

char	*check_player_direction(int mv_right)
{
	if (mv_right == -1)
		return ("../sprites/player_left.xpm");
	return ("../sprites/player_right.xpm");
}
