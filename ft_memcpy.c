/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 20:11:26 by viwade            #+#    #+#             */
/*   Updated: 2018/10/28 17:52:51 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char	*tmp;

	i = 0;
	while (n-- > 0)
	{
		tmp = &dst[i];
		tmp[0] = (unsigned char)src[i];
		i++;
	}
	return (dst);
}
