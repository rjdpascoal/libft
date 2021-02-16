/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpascoal <rpascoal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 11:24:51 by rpascoal          #+#    #+#             */
/*   Updated: 2021/02/16 12:17:25 by rpascoal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*list;
	t_list	*tmp;

	if (lst && *lst)
	{
		list = *lst;									*lst = NULL;
		
			tmp = list->next;
			ft_lstdelone(list, (*del));
			list = tmp;
			ft_lstclear(&list, (*del));
	}
}
