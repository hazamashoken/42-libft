/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.co>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 19:14:06 by tliangso          #+#    #+#             */
/*   Updated: 2022/07/05 11:06:37 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	void *arr;

	if (!nmemb || !size)
		return (NULL);
	arr = (void *)malloc(nmemb * size);
	if (!arr)
		return (NULL);
	ft_bzero(arr, size);
	return (arr);
}
