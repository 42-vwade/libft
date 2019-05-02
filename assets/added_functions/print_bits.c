/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 21:59:40 by viwade            #+#    #+#             */
/*   Updated: 2019/04/28 11:25:37 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_core/libft.h"
#include <unistd.h>

void
	print_bits(int octal)
{
	unsigned char ndx;

	ndx = 0x80;
	if (octal == -1)
		return ;
	while (ndx)
	{
		ft_putchar(((unsigned char)octal & ndx) ? '1' : '0');
		ndx = ndx >> 1;
	}
}
