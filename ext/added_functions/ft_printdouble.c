/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdouble.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 07:18:13 by viwade            #+#    #+#             */
/*   Updated: 2019/05/13 19:08:15 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <unistd.h>
#define D_MASK (0xFFFFFFFF00000000u)

static int
	get_decimal(double n, int p)
{
	return ((uint64_t)(n * ft_power(10, p)) % 10);
}

/*
**	return ((int)((n - (int)n) * 10) >= 5);
*/

static void
	write_decimal(double n, size_t p, size_t i)
{
	write(1, ".", 1);
	while (p - i++)
		ft_putchar(48 + get_decimal(n, i));
}

void
	print_double(double n, unsigned int precision)
{
	if (n < 0 && write(1, "-", 1))
		n = ABS(n);
	ft_putnbr((long)n);
	if (precision)
		write_decimal(ABS(n - (long)n), precision, 0);
}
