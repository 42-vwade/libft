/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 21:58:04 by viwade            #+#    #+#             */
/*   Updated: 2018/10/26 23:08:18 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int n)
{
	int		len;
	int		tmp;
	int		size;
	char	*str;

	len = 0;
	size = ((unsigned int)n < 0x80000000) ? 2 : 3;
	tmp = n;
	while (tmp /= 10)
		len++;
	len += size;
	if ((str = (char *)malloc(len-- * sizeof(*str))))
	{
		while (len--)
		{
			tmp = (n < 0) ? -(n % 10) : n % 10;
			str[len] = tmp + 48;
			n /= 10;
		}
		if (size == 3)
			str[0] = '-';
		free(str);
	}
	return (str);
}
