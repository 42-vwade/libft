/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_utf8.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 15:10:43 by viwade            #+#    #+#             */
/*   Updated: 2019/05/20 10:43:34 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../../libft.h"
#define ENC(n) (wc >= (n))
#define ENC1 (ENC(0x80) + ENC(0x800) + ENC(0x10000))
#define ENC2 (ENC(0x200000) + ENC(0x4000000))
#define SET(n, b) ((n > (b)) << (n))

static void
	encode(uint8_t *utf, unsigned wc, size_t i)
{
	unsigned char	set;
	size_t			n;

	n = 1 + ENC1 + ENC2;
	set = SET(0, 6) | SET(1, 5) | SET(2, 4) | SET(3, 3) | SET(4, 2) | SET(5, 1);
	while (n - i++)
		if (n - i)
			utf[i - 1] = 0x80 | (~(0xC0) & wc);
		else
			utf[i - 1] = (set << 1) | (~(set) & wc);
}

void
	print_utf8(unsigned int wc)
{
	uint8_t	utf[7];

	ft_bzero(utf, 7);
	encode(&utf[0], wc, 0);
	ft_putstr((char*)utf);
}
