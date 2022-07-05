/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.co>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:08:04 by tliangso          #+#    #+#             */
/*   Updated: 2022/07/05 14:04:16 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_charset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (*(set + i))
		if (*(set + i++) == c)
			return (1);
	return (0);
}

size_t check_front(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (check_charset(*(s1 + i), set) && *(s1 + i))
		i++;
	return (i);
}

size_t check_back(char const *s1, char const *set)
{
	size_t	i;

	i = ft_strlen(s1) - 1;
	while (check_charset(*(s1 + i), set) && i > 0)
		i--;
	return (i + 1);
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*str;

	i = 0;
	if (!s1 || !set)
		return ("");
	start = check_front(s1, set);
	end = check_back(s1, set);
	str = malloc(end - start + 1);
	if (!str)
		return (NULL);
	while (i < (end - start))
	{
		*(str + i) = *(s1 + start + i);
		i++;
	}
	*(str + i) = '\0';
	return (str);
}
