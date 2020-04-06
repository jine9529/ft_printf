/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiin <jiin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 14:47:35 by jiin              #+#    #+#             */
/*   Updated: 2020/03/06 13:20:57 by jiin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
    char			*str;
	unsigned int	i;
	
	i = 0;
    if (!s)
        return (0);
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (start < (unsigned int)ft_strlen(s))
	{
		while (s[start] != '\0' && 0 < (unsigned int)len--)
		{
			str[i++] = s[start++];
		}
	}
	str[i] = '\0';
	return (str);
}