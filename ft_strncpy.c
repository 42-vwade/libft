/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 15:46:08 by viwade            #+#    #+#             */
/*   Updated: 2018/11/10 11:25:13 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char
	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char *cpy;

	cpy = dst;
	if (!dst || !src)
		ft_die("FT_STRCAT: Cannot concatenate. Parameters invalid.");
	while (n--)
		if (!*src)
			while (*dst)
				*dst++ = '\0';
		else
			*dst++ = *src++;
	return (cpy);
}
