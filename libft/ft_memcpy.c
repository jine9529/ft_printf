/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiin <jiin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 20:16:15 by jiin              #+#    #+#             */
/*   Updated: 2020/02/28 20:16:15 by jiin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	unsigned char           *ptr;
    const unsigned char     *ptr2;

    ptr = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
    while (n-- > 0)
    {
    	*(ptr++) = *(ptr2++);
    }
    return(s1);
}