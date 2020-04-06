/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiin <jiin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 22:38:57 by jiin              #+#    #+#             */
/*   Updated: 2020/03/03 00:04:31 by jiin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_same(const char *s1, const char *s2, size_t i)
{
	size_t j;

	j = 0;
	while (s2[j] != '\0')
	{
		if (s1[i] == s2[j])
		{
			i++;
			j++;
		}
		else
			return (0);
	}
	return (1);
}

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (s2[0] == '\0')
		return ((char *)&s1[i]);
	while (s1[i] != '\0' && i <= (n - strlen(s2)))
	{
		if (s1[i] != s2[0])
			i++;
		else
		{
			if (is_same(s1, s2, i))
				return ((char *)&s1[i]);
			else
				i++;
		}
	}
	return (0);
}