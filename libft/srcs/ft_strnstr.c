/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.co>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:00:37 by tliangso          #+#    #+#             */
/*   Updated: 2022/07/04 11:19:46 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(char *haystack, char *needle, size_t len)
{
	size_t i;
	size_t k;

	i = 0;
	if (!*needle)
		return (haystack);
	while (*(haystack + i) && i < len)
	{
		k = 0;
		while (*(haystack + i + k) == *(needle + k) && i + k < len)
		{
			if (!*(needle + k + 1))
				return (haystack + i);
			k++;
		}
		i++;
	}
	return (0);
}
