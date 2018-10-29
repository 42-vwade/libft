/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 21:32:23 by viwade            #+#    #+#             */
/*   Updated: 2018/10/28 22:09:13 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int		i;
	char	*tmp;
	
	i = 0;
	while (n-- > 0)
		if (((unsigned char *)src)[i] == (unsigned char)c)
			return (&dst[i]);
		else
		{
			tmp = &dst[i];
			tmp[0] = ((unsigned char *)src)[i++];
		}
	return (NULL);
}
