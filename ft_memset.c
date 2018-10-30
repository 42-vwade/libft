/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 15:13:30 by viwade            #+#    #+#             */
/*   Updated: 2018/10/29 12:55:30 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int		i;
	char	*dup;

	i = 0;
	while (len-- > 0 && b)
	{
		dup = &b[i];
		dup[0] = (unsigned char)c;
		i++;
	}
	return (b);
}
