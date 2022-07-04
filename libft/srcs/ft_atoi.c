/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.co>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:18:20 by tliangso          #+#    #+#             */
/*   Updated: 2022/07/04 15:55:15 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
	int i;
	int neg;
	int res;

	if (!nptr)
		return (0);
	i = 0;
	neg = 1;
	while ((*(nptr + i) >= 9 && *(nptr + i) <= 13) || nptr[i] == ' ')
		i++;
	if (*(nptr + i) == '-' || *(nptr + i) == '+')
	{
		if (*(nptr + i) == '-')
			neg = -1;
		i++;
	}
	res = 0;
	while (*(nptr + i) >= '0' && *(nptr + i) <= '9')
		res = (res * 10) + (*(nptr + i++) - '0');
	return (res * neg);
}
