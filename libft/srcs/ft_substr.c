/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.co>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 10:59:12 by tliangso          #+#    #+#             */
/*   Updated: 2022/07/05 11:54:54 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (start >= ft_strlen(s))
		return (NULL);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i < len)
	{
		*(str + i) = *(s + start + i);
		i++;
	}
	*(str + i) = '\0';
	return (str);
}
