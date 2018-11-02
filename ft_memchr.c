/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 03:44:09 by viwade            #+#    #+#             */
/*   Updated: 2018/11/02 03:42:57 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	if (!s)
		return (NULL);
	while (i < n)
	{
		p = &((unsigned char *)s)[i];
		if ((unsigned char)c == p[0])
			return ((void *)p);
		i++;
	}
	return (NULL);
}
