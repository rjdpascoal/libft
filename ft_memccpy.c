/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpascoal <rpascoal@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 17:45:50 by rpascoal          #+#    #+#             */
/*   Updated: 2021/02/12 14:37:43 by rpascoal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char a;

	a = (unsigned char)c;
	while (n > 0)
	{
		*((unsigned char *)dest) = *((unsigned char*)src);
		if (*((unsigned char *)src) == a)
		{
			dest++;
			return (dest);
		}
		dest++;
		src++;
		n--;
	}
	return (NULL);
}
