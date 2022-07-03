/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <tliangso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 20:38:03 by tliangso          #+#    #+#             */
/*   Updated: 2022/07/03 21:16:30 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;

	if (!dest && !src)
		return (NULL);
	if (dest > src)
		while (n--)
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	else
	{
		i = 0;
		while (i <n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			++i;
		}
	}
	return (dest);
}
