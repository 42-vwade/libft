/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 03:57:32 by viwade            #+#    #+#             */
/*   Updated: 2018/11/04 09:04:16 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *dest, const char *src, int nb)
{
	int		i;
	char	*cpy;

	i = 0;
	cpy = dest;
	if (!dest || !src)
		return (dest);
	while (*dest)
		dest++;
	while (src[i++] && nb-- > 0)
		dest[i - 1] = src[i - 1];
	return (cpy);
}
