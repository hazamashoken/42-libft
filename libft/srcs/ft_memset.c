/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <tliangso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:41:17 by tliangso          #+#    #+#             */
/*   Updated: 2022/07/03 21:19:35 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t i;

	i = 0;
	if (!str)
		return (NULL);
	while (i < n)
		((unsigned char *)str)[i++] = (char)c;
	return (str);
}
