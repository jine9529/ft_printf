/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiin <jiin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 18:09:43 by jiin              #+#    #+#             */
/*   Updated: 2020/03/01 18:09:43 by jiin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char		*ptr1;
	const unsigned char		*ptr2;

	ptr1 = s1;
	ptr2 = s2;
	if (n == 0)
		return (0);
	while (n-- > 0)
	{
		if (*ptr1 == *ptr2)
		{
			ptr1++;
			ptr2++;
		}
		else
			return (*ptr1 - *ptr2);
	}
	return (0);
}