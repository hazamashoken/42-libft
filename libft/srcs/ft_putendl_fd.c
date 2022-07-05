/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.co>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:20:59 by tliangso          #+#    #+#             */
/*   Updated: 2022/07/05 20:24:20 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
	size_t i;

	i = 0;
	if (!s)
		return;
	while (*(s + i))
		ft_putchar_fd(*(s + i++), fd);
	ft_putchar_fd('\n', fd);
}
