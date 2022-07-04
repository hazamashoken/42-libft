/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.co>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:18:20 by tliangso          #+#    #+#             */
/*   Updated: 2022/07/04 21:17:13 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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
		return (0);
	else
		return (-1);
}

int ft_atoi(const char *nptr)
{
	int i;
	int neg;
	long res;
	int cutlim;

	if (!nptr)
		return (0);
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
			if (neg == -1)
				return (check_return(neg));
		res = (res * 10) + (*(nptr + i++) - '0');
	}
	return (res * neg);
}
