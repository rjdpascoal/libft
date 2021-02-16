/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpascoal <rpascoal@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 18:43:35 by rpascoal          #+#    #+#             */
/*   Updated: 2021/02/10 19:33:14 by rpascoal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	a;

	a = (unsigned char)c;
	while (n > 0)
	{
		if ((*(unsigned char *)s) == a)
			return ((unsigned char *)s);
		n--;
		s++;
	}
	return (NULL);
}
