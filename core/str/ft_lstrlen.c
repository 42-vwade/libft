/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 02:48:54 by viwade            #+#    #+#             */
/*   Updated: 2019/05/27 12:20:32 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <string.h>

int64_t	ft_lstrlen(const int *s)
{
	int	*e;

	e = (int *)s;
	while (*(e += !!e[0]))
		;
	return ((e - s) / sizeof(int));
}
