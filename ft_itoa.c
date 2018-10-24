/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 21:58:04 by viwade            #+#    #+#             */
/*   Updated: 2018/10/23 23:00:47 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int n)
{
	int		len;
	int		tmp;
	int		base;
	int		size;
	char	*str;

	len = 0;
	base = 10;
	size = ((unsigned int)n < 0x80000000) ? 2 : 3;
	tmp = n;
	while (tmp /= base)
		len++;
	len += size;
	if ((str = (char *)malloc(len * sizeof(*str))))
	{
		str[--len] = 0;
		while (n)
		{
			tmp = (n < 0) ? -(n % base) : n % base;
			str[--len] = tmp + 48;
			n /= base;
		}
		if (size == 3)
			str[0] = '-';
	}
	return (str);
}
