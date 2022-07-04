/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.co>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 10:22:44 by tliangso          #+#    #+#             */
/*   Updated: 2022/07/04 10:29:46 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *haystack, char *needle)
{
	size_t	i;
	size_t	k;

	i = 0;
	if (!*needle)
		return (haystack);
	while (*(haystack + i))
	{
		k = 0;
		while (*(haystack + i + k) == *(needle + k) && *(haystack + i + k))
		{
			if (*(needle + k + 1))
				return (haystack + i);
			k++;
		}
		i++;
	}
	return (0);
}
