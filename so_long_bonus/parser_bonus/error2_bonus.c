/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error2_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:29:53 by bkhatib           #+#    #+#             */
/*   Updated: 2022/06/10 13:31:13 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	err_extension(void)
{
	write(1, "Error\n", 6);
	write(1, "Invalid file extension.\n", 24);
	exit(EXIT_FAILURE);
}
