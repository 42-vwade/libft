/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 13:38:07 by viwade            #+#    #+#             */
/*   Updated: 2018/10/31 11:46:03 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	if (!dst || !src)
		return (0);
	while (dst[len])
		++len;
	if (dstsize > 0 && dstsize > len)
		while (src[i] && (i < dstsize - len - 1))
			if ((dst[len + i] = src[i]))
				i++;
	dst[len + i] = '\0';
	return (len + i);
}
