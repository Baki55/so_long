/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:10:01 by bkhatib           #+#    #+#             */
/*   Updated: 2022/05/25 22:01:02 by bkhatib          ###   ########.fr       */
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
		i++;
	}
	line[i] = '\0';
	if (!line[0])
		return (NULL);
	return (ft_strdup(line));
}

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;
	
	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	map_len(int fd)
{
	int	len;
	char	*line;
	
	len = 0;
	line = get_next_line(fd);
	while (line != NULL)
	{
		len++;
		free(line);
		line = get_next_line(fd);
	}
	free(line);
	return (len);
}

int	in_set(char c)
{
	int	i;
	char	*set;
	
	i = 0;
	set = "10CEP";
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (0);
		else
			i++;
	}
	return (1);
}