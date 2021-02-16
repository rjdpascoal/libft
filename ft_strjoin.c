/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpascoal <rpascoal@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 11:30:35 by rpascoal          #+#    #+#             */
/*   Updated: 2021/02/13 12:05:06 by rpascoal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i1;
	int		i2;
	char	*res;

	i1 = ft_strlen((char *)s1);
	i2 = ft_strlen((char *)s2);
	if ((res = ft_calloc(sizeof(char), (i1 + i2 + 3))) == NULL)
		return (NULL);
	i1 = 0;
	i2 = 0;
	while (s1[i1] != '\0')
	{
		res[i1] = s1[i1];
		i1++;
	}
	while (s2[i2] != '\0')
	{
		res[i1] = s2[i2];
		i1++;
		i2++;
	}
	return (res);
}
