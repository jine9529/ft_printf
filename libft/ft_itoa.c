/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiin <jiin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 02:04:57 by jiin              #+#    #+#             */
/*   Updated: 2020/03/07 02:54:13 by jiin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_numlen(int n)
{
	int len;

	len = 0;
	if (n < 0)
	{
		len++;
		n = n * -1;
	}
	else if (n == 0)
		len++;
	while (n > 0)
	{
		n = n / 10;
		len ++;
	}
	return (len);
}

char		*ft_loop(char *res, int mod, int rest)
{
	int		size;

	size = ft_numlen(mod);
	res[size] = '\0';
	while (mod != 0)
	{
		rest = mod % 10;
		mod = mod / 10;
		res[--size] = rest + '0';
	}
	return (res);
}

char		*ft_itoa(int n)
{
	char	*result;
	char	*res;
	int		i;
	int		mod;
	int		rest;

	res = malloc(sizeof(char) * (ft_numlen(n) + 1));
	result = res;
	i = 0;
	if (n < 0)
	{
		*res++ = '-';
		n = n * -1;
	}
	ft_loop(res, n, 0);
	return (result);
}