/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.co>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:06:32 by tliangso          #+#    #+#             */
/*   Updated: 2022/07/05 18:32:19 by tliangso         ###   ########.fr       */
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
	long	nb;

	nb = n;
	str = malloc((check_size(n) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n >= 0 && str)
	{
		*--str = '\0';
		*--str = '0' + (n % 10);
		n /= 10;
		while (n != 0)
		{
			*--str = '0' + (n % 10);
			n /= 10;
		}
	}
	else if (str)
	{
		*--str = '\0';
		*--str = '0' - (nb % 10);
		nb /= 10;
		while (nb != 0)
		{
			*--str = '0' - (nb % 10);
			nb /= 10;
		}
		*--str = '-';
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	printf("%s", ft_itoa(-2147483648));
	return (0);
}
