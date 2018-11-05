/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 09:46:53 by viwade            #+#    #+#             */
/*   Updated: 2018/11/05 09:23:38 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_whitespace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	unsigned int	start;
	size_t			len;
	char			*new;

	if (!s)
		return (NULL);
	start = 0;
	len = ft_strlen(s);
	if ((!(is_whitespace(s[start])) && !(is_whitespace(s[len - 1]))) || !len)
		return (new = ft_strdup(s));
	while (is_whitespace(s[start]) && s[start])
		start++;
	while (is_whitespace(s[len - 1]) && (len > start))
		len--;
	if (start < len)
		if ((new = ft_strsub(s, start, len)))
			return (new);
	return (NULL);
}
