/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 03:32:00 by viwade            #+#    #+#             */
/*   Updated: 2018/11/10 12:35:04 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, const char *src)
{
	size_t		i;
	size_t		len;

	i = 0;
	if (!dst || !src)
		ft_die("FT_STRCAT: Cannot concatenate. Parameters invalid.");
	len = ft_strlen(dst);
	while ((dst[len + i] = src[i]))
		i++;
	dst[len + i] = 0;
	return (dst);
}
