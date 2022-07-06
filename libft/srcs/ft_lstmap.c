/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.co>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 21:10:44 by tliangso          #+#    #+#             */
/*   Updated: 2022/07/06 09:43:13 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_head;
	t_list	*tmp;

	new_head = ft_lstnew((*f)(lst->content));
	tmp = new_head;
	while (lst->next != NULL)
	{
		lst = lst->next;
		tmp->next = ft_lstnew(ft_strdup((*f)(lst->content)));
		if (tmp->next == NULL)
		{
			ft_lstclear(&new_head, del);
			return (NULL);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
