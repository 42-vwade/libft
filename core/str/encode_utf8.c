/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   encode_utf8.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 08:19:37 by viwade            #+#    #+#             */
/*   Updated: 2019/06/08 13:53:48 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#define ENC(n) (wc >= (n))
#define ENC1 (ENC(0x80) + ENC(0x800) + ENC(0x10000))
#define ENC2 (ENC(0x200000) + ENC(0x4000000))
#define SET(b) (((n > (b)) | 2) << (6 - (b)))

static uint8_t
	pad(int8_t n)
{
	uint8_t	pad;

	pad = 0xC0;
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
	set = (n - 1) ? pad(n - 1) : 0x80;
	while (n--)
		if (n)
			(utf[n] = 0x80 | (~(0xC0) & wc)) && (wc >>= 6);
		else
			utf[n] = (set << 1) | (~(set) & wc);
	utf[6] = 0;
}

static FT_STR
	parse_utf8(unsigned wc)
{
	uint8_t	new[7];
	ssize_t	size;

	if (wc < 0x80)
		new[0] = wc;
	else
		encode(new, wc);
	return (ft_strdup(new));
}

/*
**	Unicode integer string (unsigned int *) as input.
**	Returns UTF-8 encoded characters as a continuous string of bytes.
*/

FT_STR
	encode_utf8_w(unsigned int *wc, size_t bytes)
{
	void	*utf;
	size_t	len;

	if (!(utf = ft_strdup("")))
		return (NULL);
	while (wc[0] && (signed)(bytes - ft_strlen(utf)) > 0)
		ft_strjoin_free(utf, parse_utf8((wc++)[0]));
	return (utf);
}

FT_STR
	encode_utf8(int *wc)
{
	void	*utf;

	if (!(utf = ft_strdup("")))
		return (NULL);
	while (wc[0])
		if (!(utf = parse_utf8((wc++)[0])))
			return (NULL);
	return (utf);
}