/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 10:19:49 by viwade            #+#    #+#             */
/*   Updated: 2018/11/02 03:49:59 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	words(char const *s, char c)
{
	size_t	i;
	size_t	w;

	i = 0;
	w = 0;
	while (s[i])
		if ((s[i] != c) && (w += (s[i] != c)))
			while (s[i] != c)
				i++;
		else
			while (s[i] == c)
				i++;
	return (w);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t		i;
	size_t		j;
	size_t		w;
	size_t		len;
	char		**list;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	w = words(s, c);
	if ((list = (char **)malloc(sizeof(*list) * w)))
		while (j < w && !(len = 0))
		{
			while (s[i] == c && s[i])
				i++;
			while (s[i++] != c && s[i])
				len++;
			if (!(list[j] = ft_strsub(s, i, len)))
				return (NULL);
			j++;
		}
	return (list);
}