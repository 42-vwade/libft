/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 19:36:03 by viwade            #+#    #+#             */
/*   Updated: 2020/01/31 01:11:28 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
**	Complete rewrite incoming.
*/

int
	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		length[1];

	va_start(ap, format);
	length[0] = ft_vprintf(format, ap);
	va_end(ap);
	return (length[0]);
}
