/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 03:44:09 by viwade            #+#    #+#             */
/*   Updated: 2018/11/11 23:56:43 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned long long int	len;

	if (!s)
		ft_die("");
	len = ft_strlen(&s[0]);
	while (len--)
	{
		if (s[len + 1] == (unsigned char)c)
			return ((char *)&s[len + 1]);
	}
	return ((s[len] == (unsigned char)c) ? (char *)&s[len] : NULL);
}
