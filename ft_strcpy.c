/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 15:01:08 by viwade            #+#    #+#             */
/*   Updated: 2018/11/10 10:59:27 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char	*cpy;

	cpy = dest;
	if (!dest || !src)
		ft_die("KILL(ft_strcpy): Cannot copy. Parameters invalid.");
	while ((*dest++ = *src++))
		;
	return (cpy);
}
