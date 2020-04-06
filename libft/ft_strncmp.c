/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiin <jiin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 00:07:54 by jiin              #+#    #+#             */
/*   Updated: 2020/03/03 00:15:07 by jiin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned int	i;
	int				diff;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && ((s1[i] != '\0')
				&& (s2[i] != '\0')) && (i < n - 1))
	{
		i++;
	}
	diff = s1[i] - s2[i];
	return (diff);
}