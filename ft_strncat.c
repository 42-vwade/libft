/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 03:57:32 by viwade            #+#    #+#             */
/*   Updated: 2018/11/05 08:28:22 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	size_t	i;
	char	*cpy;

	i = 0;
	if (!dest || !src)
		return (dest);
	cpy = dest;
	while (*dest)
		dest++;
	while (src[i++] && nb-- > 0)
		dest[i - 1] = src[i - 1];
	return (cpy);
}
