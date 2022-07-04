/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.co>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 10:16:07 by tliangso          #+#    #+#             */
/*   Updated: 2022/07/04 10:21:22 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	size_t	i;
	int		k;

	i = 0;
	k = -1;
	while (i <= ft_strlen(s))
	{
		if (*(s + i) == (unsigned char)c)
			k = i;
		i++;
	}
	if (k != -1)
		return (s + k);
	return (0);
}
