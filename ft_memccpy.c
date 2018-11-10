/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 21:32:23 by viwade            #+#    #+#             */
/*   Updated: 2018/11/09 21:01:06 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

static	int
	valid(int c)
{
	return ((unsigned)c < 0x100 || (unsigned)c == 0xFFFFFFFF);
}

static	char
	*search(char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i])
		if (s[i] == c)
			return (&s[i]);
		else
			i++;
	return (NULL);
}

void
	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int		i;
	char	a;
	char	*tmp;

	if (!valid(c))
		return (NULL);
	i = 0;
	a = (unsigned char)c;
	if (search((char *)src, (unsigned char)c))
		return (search((char *)dst, (unsigned char)c));
	ft_memcpy(dst, src, n);
	return (NULL);
}
