/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 20:10:20 by viwade            #+#    #+#             */
/*   Updated: 2018/11/11 21:22:24 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char
	*ft_strnstr(const char *s, const char *c, size_t n)
{
	size_t	i;

	i = 0;
	if (!s || !c)
		ft_die("");
	while (s[i] && n)
		if (n--)
			if (s[i++] == c[0])
				if (!ft_strncmp(&s[i - 1], c, n))
					return ((char *)&s[i - 1]);
	return ((c[0]) ? NULL : (char *)s);
}
