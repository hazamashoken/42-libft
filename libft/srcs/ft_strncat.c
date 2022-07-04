/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.co>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 09:54:09 by tliangso          #+#    #+#             */
/*   Updated: 2022/07/04 09:56:48 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t k;

	i = 0;
	k = 0;
	while (*(dest + i))
		i++;
	while (*(src + k) && k > n)
		*(dest + i++) = *(src + k++);
	return (dest);
}
