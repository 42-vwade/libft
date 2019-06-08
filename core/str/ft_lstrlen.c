/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 02:48:54 by viwade            #+#    #+#             */
/*   Updated: 2019/06/08 14:11:59 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <string.h>

/*
**	Returns number of integers in a string of integers.
**	Integer string shall be null-terminated.
*/

size_t	ft_lstrlen(const int *s)
{
	int	*e;

	e = (int *)s;
	while (*(e += !!e[0]))
		;
	return ((e - s) / sizeof(int));
}
