/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.co>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:42:38 by tliangso          #+#    #+#             */
/*   Updated: 2022/07/05 19:19:58 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrev(char *str)
{
	size_t	i;
	size_t	k;
	char 	tmp;

	i = 0;
	k = ft_strlen(str) - 1;
	while (i < k)
	{
		tmp = str[i];
		str[i] = str[k];
		str[k] = tmp;
		k--;
		i++;
	}
	return (str);
}
