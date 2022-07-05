/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.co>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 21:10:44 by tliangso          #+#    #+#             */
/*   Updated: 2022/07/05 21:14:18 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *result;
	t_list *tmpresult;
	t_list *tmplst;

	if (lst == NULL || f == NULL)
		return (NULL);
	tmplst = f(lst);
	if ((result = ft_lstnew(tmplst->content, tmplst->content_size)))
	{
		tmpresult = result;
		lst = lst->next;
		while (lst != NULL)
		{
			tmplst = (*f)(lst);
			if (!(tmpresult->next = ft_lstnew(tmplst->content, tmplst->content_size)))
				return (NULL);
			tmpresult = tmpresult->next;
			lst = lst->next;
		}
	}
	return (result);
}
