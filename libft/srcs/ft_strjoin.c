/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.co>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 22:49:19 by tliangso          #+#    #+#             */
/*   Updated: 2022/07/05 12:53:47 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*res;

	if (size == 0)
		return (malloc(sizeof(char)));
	len = (size - 1) * (ft_strlen(sep) - 1);
	i = -1;
	while (++i < size)
		len += (ft_strlen(strs[i]) - 1);
	res = (char *)malloc(len + 1);
	if (!res)
		return (0);
	*res = '\0';
	i = -1;
	while (i++ + 1 < size)
	{
		ft_strcat(res, strs[i]);
		if (i + 1 < size)
			ft_strcat(res, sep);
	}
	return (res);
}
