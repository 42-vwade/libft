/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 03:57:32 by viwade            #+#    #+#             */
/*   Updated: 2018/11/05 14:11:30 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	size_t	i;
	char	*cat;

	i = 0;
	if (!dest || !src)
		return (dest);
	cat = dest;
	while (*dest)
		dest++;
	while ((dest[i] = src[i]) && nb-- > (0))
		dest[i++ + 1] = 0;
	return (cat);
}
