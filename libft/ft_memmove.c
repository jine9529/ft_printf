/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiin <jiin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 00:21:49 by jiin              #+#    #+#             */
/*   Updated: 2020/03/01 00:21:49 by jiin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned int			i;
	unsigned char			*ptr1;
	const unsigned char		*ptr2;

	i = 0;
	ptr1 = s1;
	ptr2 = s2;
	if(s1 < s2)
	{
		while (n-- > 0)
			*(ptr1++) = *(ptr2++);
	}
	else
	{
		while (i++ < n)
		{
			ptr1[n - i] = ptr2[n - i];
		}
	}
	return (s1);
}