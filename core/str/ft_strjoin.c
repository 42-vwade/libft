/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 11:02:07 by viwade            #+#    #+#             */
/*   Updated: 2019/09/02 21:02:55 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

/*
**	Returns a copy of two strings.
**	Takes two strings and combines them, the first after the second.
**	If either source strings are null, a copy of the other string is returned.
**	If both strings are null, a null pointer is returned.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*new;

	if (!s1 && !s2)
		return (NULL);
	if (!s2)
		return (ft_strdup((char*)s1));
	if (!s1)
		return (ft_strdup((char*)s2));
	len = ft_strlen(s1) + ft_strlen(s2);
	if ((new = (char *)malloc(sizeof(*new) * len + 1)))
		if ((new = ft_strncpy(new, s1, len)))
			if ((new = ft_strncat(new, s2, len)))
				new[len] = 0;
	return (new);
}
