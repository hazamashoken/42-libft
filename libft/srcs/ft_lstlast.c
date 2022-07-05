/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.co>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:43:26 by tliangso          #+#    #+#             */
/*   Updated: 2022/07/05 20:45:28 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	t_list *node;

	node = lst;
	if (node)
	{
		while(node->next != NULL)
			node = node->next;
	}
	return (node);
}
