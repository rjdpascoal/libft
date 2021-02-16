/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpascoal <rpascoal@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 12:35:36 by rpascoal          #+#    #+#             */
/*   Updated: 2021/02/13 19:50:41 by rpascoal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		setl;
	char	*res;

	start = 0;
	setl = ft_strlen((char *)set);
	end = ft_strlen((char *)s1) - 1;
	while (s1[start] == set[start] && set[start] != '\n')
		start++;
	if (start != setl)
		start = 0;
	while (s1[end] == set[setl - 1] && setl > 0)
	{
		setl--;
		end--;
	}
	if (setl != 0)
		end = ft_strlen((char *)s1) - 1;
	if ((res = ft_calloc(sizeof(char *), (2 + end - start))) == NULL)
		return (NULL);
	ft_strlcpy(res, s1 + start, end + 1 - start);
	return (res);
}
