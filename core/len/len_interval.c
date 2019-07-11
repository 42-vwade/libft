/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   len_interval.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 16:58:45 by viwade            #+#    #+#             */
/*   Updated: 2019/07/10 17:07:36 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	len_interval(void const *s, size_t interval)
{
	void const	*e;
	size_t		i;
	size_t		v;

	e = s;
	while (((char *)e)[0])
	{
		i = 0;
		v = 0;
		while (i < interval)
			v += (char)((char *)v)[i++];
	}
}
