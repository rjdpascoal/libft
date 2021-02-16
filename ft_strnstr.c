/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpascoal <rpascoal@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 15:47:12 by rpascoal          #+#    #+#             */
/*   Updated: 2021/02/12 16:38:10 by rpascoal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int cont1;
	int cont2;

	cont1 = 0;
	cont2 = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (s1[cont1] != '\0' && n > 0)
	{
		if (s1[cont1] == s2[cont2])
		{
			cont2++;
			if (s2[cont2] == '\0')
			{
				cont1 = cont1 - cont2 + 1;
				return ((char *)s1 + cont1);
			}
		}
		else
			cont2 = 0;
		cont1++;
		n--;
	}
	return (NULL);
}
