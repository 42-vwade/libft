/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 15:46:08 by viwade            #+#    #+#             */
/*   Updated: 2018/11/10 12:28:26 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char
	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst || !src)
		ft_die("");
	while (n && (dst[i] = src[i]))
	{
		n--;
		i++;
	}
	if (n > 0)
		ft_bzero(&dst[i], n);
	return (dst);
}
