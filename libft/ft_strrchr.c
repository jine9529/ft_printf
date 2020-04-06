/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiin <jiin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 22:15:21 by jiin              #+#    #+#             */
/*   Updated: 2020/03/02 22:39:51 by jiin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
    int s_size;

    s_size = 0;
    while (s[s_size])
    	s_size++;
    while (s_size >= 0)
	{
		if (*(s + s_size) == c)
			return ((char*)(s + s_size));
		s_size--;
	}
	if (c == '\0')
		return (NULL);
	return (NULL);
}