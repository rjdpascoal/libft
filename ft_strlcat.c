/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpascoal <rpascoal@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 12:09:13 by rpascoal          #+#    #+#             */
/*   Updated: 2021/02/12 11:25:09 by rpascoal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	index2;

	index = 0;
	index2 = 0;
	while (dst[index] != '\0')
		index++;
	while (src[index2] != '\0' && size > 0)
	{
		dst[index] = src[index2];
		index++;
		index2++;
		size--;
	}
	dst[index] = '\0';
	return (index);
}
