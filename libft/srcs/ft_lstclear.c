/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.co>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 21:00:45 by tliangso          #+#    #+#             */
/*   Updated: 2022/07/05 21:15:37 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *elem;
	t_list *list;

	elem = *lst;
	while (elem != 0)
	{
		list = elem->next;
		(*del)(elem->data);
		free(elem);
		elem = list;
	}
	*lst = NULL;
}