/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiin <jiin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 17:01:49 by jiin              #+#    #+#             */
/*   Updated: 2020/03/07 17:06:04 by jiin             ###   ########.fr       */
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

void		ft_putnbr_fd(int n, int fd)
{
    wirte(fd, &(*ft_itoa(n)), ft_numlen(n));
}