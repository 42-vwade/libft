/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdouble.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 07:18:13 by viwade            #+#    #+#             */
/*   Updated: 2019/05/05 13:21:04 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_core/libft.h"
#include <unistd.h>
#define D_MASK (0xFFFFFFFF00000000u)

static int
	round_up(double n)
{
	return ((int)((n - (int)n) * 10) >= 5);
}

static void
	print_double(long d, double n, size_t p, size_t i)
{
	uint64_t	num;
	uint64_t	len;

	num = 0;
	while (n && p - i++)
	{
		num = num * 10 + (long)(n * 10);
		n = n * 10 - (long)(n * 10);
	}
	len = ft_intlen(num);
	num += !(p - --i) && round_up(n);
	d += ft_intlen(num) > len;
	ft_putnbr(d);
	if (p)
	{
		num %= ft_power(10, len);
		write(1, ".", 1);
		ft_putnbr(num);
	}
}

void
	ft_printdouble(double n, unsigned int precision)
{
	if (n < 0 && write(1, "-", 1))
		n = ABS(n);
	print_double((long)n, ABS(n - (long)n), precision, 0);
}
