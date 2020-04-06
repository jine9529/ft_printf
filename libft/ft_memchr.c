/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiin <jiin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 14:57:34 by jiin              #+#    #+#             */
/*   Updated: 2020/03/01 14:57:34 by jiin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
    unsigned char		*ptr1;

	ptr1 = (unsigned char *)s;
    while (n > 0)
    {
		if (*ptr1 != (unsigned char)c)
		{
			n--;
			ptr1++;
		}
		else
		{
			return (ptr1);
		}
    }
	return (NULL);
}