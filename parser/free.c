/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 21:54:32 by bkhatib           #+#    #+#             */
/*   Updated: 2022/05/26 22:02:31 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	free_map(t_program *game)
{
	int	i;
	
	i = 0;
	while (game->map.map[i])
		free(game->map.map[i++]);
	free(game->map.map);
}