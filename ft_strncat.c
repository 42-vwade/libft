/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 03:57:32 by viwade            #+#    #+#             */
/*   Updated: 2018/11/07 00:55:00 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*dup;
	size_t	i;

	i = 0;
	dup = s1;
	dup += ft_strlen(s1);
	while (i < n && (s2[i]))
	{
		(dup++)[0] = s2[i++];
		dup[0] = (n - i) ? : '\0';
	}
	return (s1);
}
