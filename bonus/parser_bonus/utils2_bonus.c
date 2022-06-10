/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:32:13 by bkhatib           #+#    #+#             */
/*   Updated: 2022/06/10 13:33:20 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	ft_swap(char *a, char *b)
{
	char	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	ft_strchr(char *str, char c)
{
	while (*str != '\0')
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *str)
{
	char	*dup;
	size_t	str_len;
	size_t	i;

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
	int		i;

	i = 0;
	while (read(fd, &buff, 1) == 1)
	{
		line[i] = buff;
		if (buff == '\n')
			break ;
		i++;
	}
	line[i] = '\0';
	if (!line[0])
		return (NULL);
	return (ft_strdup(line));
}
