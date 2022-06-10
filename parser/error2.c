/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 21:52:12 by bkhatib           #+#    #+#             */
/*   Updated: 2022/06/10 14:01:38 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	err_extension(void)
{
	write(1, "Error\n", 6);
	write(1, "Invalid file extension.\n", 24);
	exit(EXIT_FAILURE);
}
