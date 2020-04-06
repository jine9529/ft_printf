/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiin <jiin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 01:58:34 by jiin              #+#    #+#             */
/*   Updated: 2020/02/27 01:58:34 by jiin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void* ft_memset(void *b, int c, size_t n)
{
    unsigned char *ptr;

    ptr = (unsigned char*)b;
    while(n > 0)
    {
        *(ptr++) = (unsigned char)c;
        n--;
    }
    return (b);
}