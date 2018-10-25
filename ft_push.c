/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 23:49:57 by viwade            #+#    #+#             */
/*   Updated: 2018/10/25 00:00:42 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	**ft_push(void **arr)
{
	void	**new;
	int		size;

	size = sizeof(arr) / sizeof(void);
	if ((new = (void **)malloc(size + 1)))
	{
		new[size] = 0;
		while (size-- > 0)
			new[size] = arr[size];
	}
	return(new);
}