/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiin <jiin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 18:34:05 by jiin              #+#    #+#             */
/*   Updated: 2020/03/01 18:34:05 by jiin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t	count;
    size_t	i;

    i = 0;
    count = 0;
    while (src[count])
        count++;
    if (size == 0)
        return (count);
    while (src[i] != '\0' && i < (size - 1))
    {
		dst[i] = src[i];
		i++;
    }
	dst[i] = '\0';
	return (count);
}