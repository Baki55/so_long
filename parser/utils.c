/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:10:01 by bkhatib           #+#    #+#             */
/*   Updated: 2022/06/01 22:02:57 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

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
