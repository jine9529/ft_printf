/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiin <jiin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 00:11:33 by jiin              #+#    #+#             */
/*   Updated: 2020/03/07 01:53:21 by jiin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_words_count(char const *s, char c)
{
    int		words;
	int		i;

	words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != '\0' && (s[i] != c))
				i++;
			words++;
		}
		i++;
	}
	return (words);
}

char		**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		from;
	int		index;

	result = malloc(sizeof(char*) * (ft_words_count(s, c) + 1));
	index = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			from = i;
			while (s[i] != '\0' && (s[i] != c))
			{
				i++;
			}
			result[index] = malloc(sizeof(char) * (i - from + 1));
			ft_strlcpy(result[index], &s[from], (i - from + 1));
			index++;
		}
		i++;
	}
	result[index] = 0;
	return (result);
}