/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 13:38:07 by viwade            #+#    #+#             */
/*   Updated: 2018/10/31 11:28:53 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*cpy;
	size_t	i;
	size_t	len;

	cpy = dst;
	i = 0;
	len = 0;
	while (dst[len])
		++len;
	if (dstsize > 0 && dstsize > len && *src)
		while (i++ < dstsize - len - 1)
			if ((dst[len + i - 1] = src[i - 1]))
				;
			else
				dst[i] = '\0';
	return (len + i);
}
