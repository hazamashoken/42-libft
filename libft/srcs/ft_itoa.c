/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.co>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:06:32 by tliangso          #+#    #+#             */
/*   Updated: 2022/07/05 20:01:28 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	check_size(int	n)
{
	size_t	len;

	if (n == 0)
		return (1);
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

	neg = 0;
	str = malloc((check_size(n) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	else if (n < 0)
		neg = 1;
	i = 0;
	while (n != 0)
	{
		*(str + i++) = '0' + ft_abs(n % 10);
		n = (n / 10);
	}
	if (neg)
		*(str +i ) = '-';
	ft_strrev(str);
	return (str);
}
