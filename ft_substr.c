/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpascoal <rpascoal@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 10:25:35 by rpascoal          #+#    #+#             */
/*   Updated: 2021/02/13 11:15:49 by rpascoal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	i = 0;
	if ((res = malloc(sizeof(char) * len + 2)) == NULL)
		return (NULL);
	while (i < len && s[start] != '\0')
	{
		res[i] = s[start];
		i++;
		start++;
	}
	return (res);
}
