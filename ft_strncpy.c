/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 15:46:08 by viwade            #+#    #+#             */
/*   Updated: 2018/11/10 12:20:19 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char
	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	len;

	i = 0;
	if (!dst || !src)
		ft_die("");
	while (n-- && (dst[i] = src[i]))
		i++;
	if (n > 0)
		ft_bzero(&dst[i], n);
	return (dst);
}
