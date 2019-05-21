/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_utf8.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 15:10:43 by viwade            #+#    #+#             */
/*   Updated: 2019/05/21 03:02:15 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../../libft.h"
#define ENC(n) (wc >= (n))
#define ENC1 (ENC(0x80) + ENC(0x800) + ENC(0x10000))
#define ENC2 (ENC(0x200000) + ENC(0x4000000))
#define SET(b) (((n > (b)) | 2) << (6 - (b)))

static uint8_t
	pad_set(int8_t n)
{
	uint8_t	pad;

	pad = (n) ? 0xC0 : 0x80;
	while (0 < n--)
		pad = (pad >> 1) + 0x80;
	return (pad);
}

static void
	encode(uint8_t *utf, unsigned wc)
{
	uint8_t	set;
	size_t	n;

	n = 1 + ENC1 + ENC2;
	set = pad_set(n - 1);
	while (n--)
		if (n)
			(utf[n] = 0x80 | (~(0xC0) & wc)) && (wc >>= 6);
		else
			utf[n] = (set << 1) | (~(set) & wc);
}

void
	print_utf8(unsigned int wc)
{
	uint8_t	utf[7];

	print_memory(&wc, sizeof(wc));
	encode(&utf[0], wc);
	print_memory(utf, sizeof(*utf) * 7);
	ft_putstr((char*)utf);
}
