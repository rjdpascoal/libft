/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpascoal <rpascoal@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 13:42:46 by rpascoal          #+#    #+#             */
/*   Updated: 2021/02/13 19:45:33 by rpascoal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	int	str_count(char const *str, char c)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			res++;
		i++;
	}
	return (res);
}

static	int	next_c(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static char	**make_array(char const *s, char c, char **result, int cont)
{
	size_t	start;
	int		size;

	size = 0;
	start = 0;
	while (start < ft_strlen((char *)s))
	{
		size = next_c(s + start, c);
		if (size > 0)
		{
			if ((result[cont] = malloc(sizeof(char) * (size + 2))) == NULL)
				return (NULL);
			ft_strlcpy(result[cont], s + start, size);
			cont++;
		}
		if (size == 0)
			start++;
		start = start + size;
	}
	result[cont] = 0;
	return (result);
}

char		**ft_split(char const *s, char c)
{
	char	**result;

	if ((result = malloc(sizeof(char *) * (str_count(s, c) + 1))) == NULL)
		return (NULL);
	result = make_array(s, c, result, 0);
	return (result);
}
