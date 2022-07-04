/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.co>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 11:09:54 by tliangso          #+#    #+#             */
/*   Updated: 2022/07/04 18:59:38 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
@brief	copy char from src to dest for whithin the input size
@param	char*	dest	pointer to first char of dest
@param	char*	src		pointer to first char of src
@param	un int	size	size of src to be cpy to dest
*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;

	n = ft_strlen(src);
	i = 0;
	if (size)
	{
		while (*src && i < size - 1)
		{
			*dest = *src;
			dest++;
			src++;
			i++;
		}
		*dest = '\0';
	}
	return (n);
}
