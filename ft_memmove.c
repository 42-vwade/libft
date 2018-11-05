/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 03:19:10 by viwade            #+#    #+#             */
/*   Updated: 2018/11/05 09:04:40 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	char			*p;
	unsigned char	t;

	i = 0;
	if ((!dst || !src))
		return (dst);
	while (len-- > 0)
	{
		t = ((unsigned char *)src)[i];
		p = &dst[i];
		p[0] = t;
		i++;
	}
	return (dst);
}
