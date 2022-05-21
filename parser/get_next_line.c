/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 22:29:17 by bkhatib           #+#    #+#             */
/*   Updated: 2022/05/21 23:08:23 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

size_t	ft_strlen(const char *str)
{
	size_t i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *str)
{
	char	*dup;
	size_t	str_len;
	int	i;
	
	i = 0;
	str_len = ft_strlen(str);
	dup = malloc(sizeof(char) * (str_len + 1));
	if (!dup)
		return (NULL);
	while (i < str_len)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	*get_next_line(int fd)
{
	char	line[8000000];
	char	buff;
	int	i;
	
	i = 0;
	while (read(fd, &buff, 1) == 1)
	{
		line[i] = buff;
		if (buff == '\n')
			break;
	}
	line[i] = '\0';
	if (!line[0])
		return (NULL);
	return (ft_strdup(line));
}