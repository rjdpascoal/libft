/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpascoal <rpascoal@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 18:24:15 by rpascoal          #+#    #+#             */
/*   Updated: 2021/02/12 18:31:02 by rpascoal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*copy;
	int		cont;

	cont = ft_strlen((char *)src);
	if ((copy = (char *)malloc(sizeof(char) * (cont + 1))) == NULL)
		return (0);
	cont = 0;
	while (src[cont] != 0)
	{
		copy[cont] = src[cont];
		cont++;
	}
	copy[cont] = '\0';
	return (copy);
}
