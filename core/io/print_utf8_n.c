/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_utf8_n.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 15:10:43 by viwade            #+#    #+#             */
/*   Updated: 2019/05/22 03:18:43 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../../libft.h"

/*
**	Unicode string as array of integer-32 values.
**	Unicode string shall be null-terminated.
*/
size_t
	print_utf8_n(unsigned int *ws, size_t len)
{
	size_t	size;
	size_t	i;

	i = 0;
	size = 0;
	if (ws && len)
		while (ws[i] && len--)
			size += write_utf8(ws[i++]);
	return (size);
}
