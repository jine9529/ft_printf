/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiin <jiin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 13:38:09 by jiin              #+#    #+#             */
/*   Updated: 2020/03/06 15:03:08 by jiin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		size;

	size = strlen(s1) + strlen(s2) + 1;

	if(!(result = malloc(sizeof(char) * size)))
		return (0);
    ft_strlcat((char *)s1, (char *)s2, size);
	result = (char *)s1;
	return (result);
}