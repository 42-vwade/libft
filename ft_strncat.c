/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 03:57:32 by viwade            #+#    #+#             */
/*   Updated: 2018/11/05 15:03:30 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	size_t	i[2];
	char	*cat;

	if (!dest || !src)
		return (dest);
	i[0] = 0;
	i[1] = 0;
	cat = dest;
	while (dest[i[0]])
		i[0]++;
	while ((dest[i[0] + i[1]] = src[i[1]]) && nb-- > (0))
		dest[i[0] + i[1]++ + 1] = 0;
	return (cat);
}
