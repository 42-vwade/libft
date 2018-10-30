/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 00:08:10 by viwade            #+#    #+#             */
/*   Updated: 2018/10/29 17:50:43 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src);

char	*ft_strdup(char *src)
{
	char	*len;
	char	*dup;

	len = src;
	while (*len++)
		;
	if ((dup = (char *)malloc(sizeof(*dup) * (long int)(++len - src))))
		return (ft_strcpy(dup, src));
	else
		return (0);
}
