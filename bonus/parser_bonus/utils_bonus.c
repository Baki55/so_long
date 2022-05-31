/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:10:01 by bkhatib           #+#    #+#             */
/*   Updated: 2022/05/31 20:37:55 by bkhatib          ###   ########.fr       */
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
	if (line == NULL)
	{
		free(line);
		write(1, "Error\n", 6);
		write(1, "Something went wrong with the map.", 34);
		close(fd);
		exit(EXIT_FAILURE);
	}
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
	set = "10CEPX";
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (0);
		else
			i++;
	}
	return (1);
}

size_t	len_nbr(int n)
{
	size_t	nbr;

	nbr = 0;
	if (n == 0)
		nbr++;
	if (n == -2147483648)
		n++;
	if (n < 0)
	{
		n *= -1;
		nbr++;
	}
	while (n > 0)
	{
		nbr++;
		n /= 10;
	}
	return (nbr);
}

char	*ft_itoa(int c)
{
	size_t			len;
	char			*buff;
	unsigned int	n;

	len = len_nbr(c);
	if (c < 0)
		n = (unsigned int)(c * -1);
	else
		n = (unsigned int)c;
	buff = (char *)malloc(sizeof(char) * (len + 1));
	if (buff != NULL)
	{
		if (c == 0)
			buff[0] = '0';
		if (c < 0)
			buff[0] = '-';
		buff[len] = '\0';
		while (n > 0)
		{
			len--;
			buff[len] = (char)(n % 10 + '0');
			n /= 10;
		}
	}
	return (buff);
}