/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiin <jiin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 22:29:58 by jiin              #+#    #+#             */
/*   Updated: 2020/02/29 22:29:58 by jiin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	unsigned char			*ptr1;
	const unsigned char		*ptr2;	

	ptr1 = s1;
	ptr2 = s2;
	while (n-- > 0)
	{
		*(ptr1) = *(ptr2);
		if (*(ptr1) == c)
		{
			return (ptr1++);
		}
		else
		{
			ptr1++;
			ptr2++;
		}
	}
	return (NULL);
}