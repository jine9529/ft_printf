/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiin <jiin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 20:08:40 by jiin              #+#    #+#             */
/*   Updated: 2020/03/02 22:03:25 by jiin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t	dst_size;
    size_t	src_size;
	size_t	result;

	dst_size = 0;
    src_size = 0;
	result = 0;
	while (dst[dst_size])
		dst_size++;
    while (src[src_size])
        src_size++;
    if (size < src_size)
		result = src_size + size;
	else
		result = src_size + dst_size;
	src_size = 0;
	while (src[src_size] != '\0' && dst_size + 1 < size)
		dst[dst_size++] = src[src_size++];
	dst[dst_size] = '\0';
	return (result);    
}