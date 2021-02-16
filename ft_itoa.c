/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpascoal <rpascoal@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 10:10:57 by rpascoal          #+#    #+#             */
/*   Updated: 2021/02/14 13:04:28 by rpascoal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	get_size(int n)
{
	int size;

	size = 1;
	if (n < 0)
	{
		size++;
		n = -n;
	}
	while (n >= 10)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

static char	*char_max(void)
{
	char	*res;

	if ((res = malloc(sizeof(char) * 12)) == NULL)
		return (NULL);
	ft_strlcpy(res, "-2147483648", 11);
	return (res);
}

static char	*make_char(int n, char *res, int size)
{
	res[size] = '\0';
	size--;
	while (n >= 10)
	{
		res[size] = '0' + (n % 10);
		n = n / 10;
		size--;
	}
	res[size] = '0' + n;
	return (res);
}

char		*ft_itoa(int n)
{
	int		size;
	char	*res;

	if (n == -2147483648)
	{
		res = char_max();
		return (res);
	}
	size = get_size(n);
	if ((res = malloc(sizeof(char) * size + 2)) == NULL)
		return (NULL);
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	res = make_char(n, res, size);
	return (res);
}
