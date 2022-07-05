/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.co>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:23:27 by tliangso          #+#    #+#             */
/*   Updated: 2022/07/05 14:30:37 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_check_separator(char s, char c)
{
	return (s == c);
}

int ft_count_strings(char *str, char c)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && str[i] == c)
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && str[i] != c)
			i++;
	}
	return (count);
}

int ft_strlen_sep(char *str, char c)
{
	int i;

	i = 0;
	while (str[i] && !ft_check_separator(str[i], c))
		i++;
	return (i);
}

char *ft_word(char *str, char c)
{
	int len_word;
	int i;
	char *word;

	i = 0;
	len_word = ft_strlen_sep(str, c);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char **ft_split(char const *s, char c)
{
	char **strings;
	int i;

	i = 0;
	strings = (char **)malloc(sizeof(char *) * (ft_count_strings(s, c) + 1));
	while (*s != '\0')
	{
		while (*s != '\0' && ft_check_separator(*s,c))
			s++;
		if (*s != '\0')
		{
			strings[i] = ft_word(s, c);
			i++;
		}
		while (*s && !ft_check_separator(*s, c))
			s++;
	}
	strings[i] = 0;
	return (strings);
}
