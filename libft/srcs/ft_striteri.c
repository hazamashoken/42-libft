/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.co>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:15:25 by tliangso          #+#    #+#             */
/*   Updated: 2022/07/05 20:19:06 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	char *str;
	size_t i;

	i = 0;
	if (!s)
		return ;
	while (*(s + i))
	{
		(*f)(i, (s + i));
		i++;
	}
}
