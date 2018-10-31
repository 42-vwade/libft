/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 20:10:20 by viwade            #+#    #+#             */
/*   Updated: 2018/10/31 10:24:16 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	compare(const char *s, const char *q)
{
	size_t	i;

	i = 0;
	while (s[i] == q[i])
		if (!q[++i])
			return (1);
	return (0);
}

char		*ft_strstr(const char *s, const char *c)
{
	size_t	i;

	i = 0;
	if (!s || !c)
		return ((char *)s);
	while (s[i])
		if (compare(&s[i++], c))
			return ((char *)&s[i - 1]);
	return ((c[0]) ? NULL : (char *)s);
}
