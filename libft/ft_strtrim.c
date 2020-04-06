/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiin <jiin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 15:03:59 by jiin              #+#    #+#             */
/*   Updated: 2020/03/07 00:10:16 by jiin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_copy(char const *start, char const *end)
{
	char	*res;

	if (start <= end)
		*res = *start++;
	else (res);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	char	*p;
	int		size;
	int		i;
	int		j;

	size = 0;
	if (s1[size] && ft_strchr(set, s1[size]))
		size++;
	if (!(result = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (!(ft_strchr(set, s1[i])))
			result[j++] = (char)s1[i];
		i++;
	}
	result[j] = '\0';
	return (result);
}

#include <stdio.h>
int main(void)
{
	char s1[10] = "apple";
	char s2[4] = "bap";

	printf("%s\n", ft_strtrim(s1, s2));
	return (0);
}