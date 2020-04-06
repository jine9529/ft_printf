/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiin <jiin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 03:04:27 by jiin              #+#    #+#             */
/*   Updated: 2020/03/07 16:17:34 by jiin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int     i;
	char	*str;

    if (!(s && f))
    	return (NULL);
    if (s)
	{
		if (!(str = ft_strdup((const char *)s)))
			return (NULL);
    	i = 0;
    	while (str[i] != '\0')
    	{
			str[i] = f((unsigned int)i, str[i]);
			i++;
    	}
		return (str);
	}
	else
		return (NULL);
}