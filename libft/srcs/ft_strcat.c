/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.co>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 09:48:44 by tliangso          #+#    #+#             */
/*   Updated: 2022/07/04 09:51:49 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (*(dest + i))
		i++;
	while (*(src + k))
		*(dest + i++) = *(src + k++);
	return (dest);
 }
