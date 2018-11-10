/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 15:46:08 by viwade            #+#    #+#             */
/*   Updated: 2018/11/10 12:02:28 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char
	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	len;

	if (!dst || !src)
		ft_die("FT_STRNCAT: Died.");
	ft_memmove(dst, src, n);
	if (n < ft_strlen(src))
		while (dst[n])
			dst[n++] = 0;
	return (dst);
}
