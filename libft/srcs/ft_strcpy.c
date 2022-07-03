/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <tliangso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 22:39:05 by tliangso          #+#    #+#             */
/*   Updated: 2022/07/03 22:58:32 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strcpy(char *dest, const char *src)
{
	size_t i;

	i = 0;
	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
