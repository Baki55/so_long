/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_extension_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:34:14 by bkhatib           #+#    #+#             */
/*   Updated: 2022/06/09 15:00:48 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

int	check_extention(const char *file_name, const char *extension)
{
	size_t	len_file;
	size_t	len_extension;

	len_file = ft_strlen(file_name);
	len_extension = ft_strlen(extension);
	while (len_file > len_extension)
	{
		file_name++;
		len_file--;
	}
	return (ft_strcmp(file_name, extension));
}
