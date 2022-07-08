/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.co>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:18:20 by tliangso          #+#    #+#             */
/*   Updated: 2022/07/08 14:00:29 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define cutoff 922337203685477580

char	check_neg(int neg)
{
	if (neg == 1)
		return ('7');
	else
		return ('8');
}

int	check_return(int neg)
{
	if (neg == 1)
		return (-1);
	else
		return (0);
}

int ft_atoi(const char *nptr)
{
	int i;
	int neg;
	long res;
	int cutlim;

	i = 0;
	neg = 1;
	while ((*(nptr + i) >= 9 && *(nptr + i) <= 13) || nptr[i] == ' ')
		i++;
	if (*(nptr + i) == '-' || *(nptr + i) == '+')
		if (*(nptr + i++) == '-')
			neg = -1;
	cutlim = check_neg(neg);
	res = 0;
	while (*(nptr + i) >= '0' && *(nptr + i) <= '9')
	{
		if ((res > cutoff) || (res == cutoff && (*(nptr + i) > cutlim)))
			return (check_return(neg));
		res = (res * 10) + (*(nptr + i++) - '0');
	}
	return (res * neg);
}
