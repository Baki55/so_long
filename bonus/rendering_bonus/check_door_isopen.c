/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_door_isopen.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:46:55 by bkhatib           #+#    #+#             */
/*   Updated: 2022/06/10 13:50:45 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

char	*check_door_isopen(int can_exit)
{
	if (can_exit == 1)
		return ("../sprites/is_open.xpm");
	return ("../sprites/is_closed.xpm");
}
