/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 03:57:32 by viwade            #+#    #+#             */
/*   Updated: 2018/10/30 22:01:46 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*fn_strncat(char *dest, const char *src, int nb)
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
