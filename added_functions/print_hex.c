/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 05:43:09 by viwade            #+#    #+#             */
/*   Updated: 2019/04/07 15:45:38 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include "../libft.h"
#define C_BYTES (c > 0xff) + (c > 0xffff) + (c > 0xffffff) + (c > 0xffffffff)\
			+ (c > 0xffffffffff) + (c > 0xffffffffffff) + (c > 0xffffffffffffff)

static void
	put_hex(u_int8_t c)
{
	char	*key;

	key = "0123456789abcdef";
	write(1, (char[2]){key[c >> 4], key[c & 0x0f]}, 2);
}

void
	print_hex(uint64_t c)
{
	uint	i;

	i = 0;
	while (i < 1 + C_BYTES)
		put_hex(c >> 8 * (C_BYTES - i++));
}
