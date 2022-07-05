/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.co>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:06:32 by tliangso          #+#    #+#             */
/*   Updated: 2022/07/05 19:23:13 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	check_size(int	n)
{
	size_t	len;

	len = 0;
	if (n < 0)
		len++;
	while (n > 0 )
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	i;
	int		neg;

	neg = 1;
	i = 0;
	if (n < 0)
		neg = -1;
	str = malloc((check_size(n) + 1) * sizeof(char));
	*(str + i) = '\0';
	while (n != 0)
	{
		*(str + i++) = ft_abs(n % 10) + '0';
		n /= 10;
	}
	if (neg == -1)
		*(str + i) = '-';
	return (ft_strrev(str));
}
