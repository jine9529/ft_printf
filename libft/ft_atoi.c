/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiin <jiin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 00:15:19 by jiin              #+#    #+#             */
/*   Updated: 2020/03/03 00:39:09 by jiin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			is_num(const char s)
{
	if (s >= 48 && s <= 57)
		return (1);
	else
		return (0);
}

int			ft_atoi(const char *str)
{
	int i;
	int sign;
	long long result;

	i = 0;
	sign = 1;
	result = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] != '\0' && is_num(str[i]))
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	result = sign * result;
	return (result);
}