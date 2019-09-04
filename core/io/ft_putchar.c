/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 10:07:14 by viwade            #+#    #+#             */
/*   Updated: 2019/08/06 02:13:47 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../../libft.h"
#define _CHSIZE(c) (1 + ((c) > 0x7f) || 3 * ((c) > 0x7ff) || 4 * ((c) > 0xffff))

void	ft_putchar(int c)
{
	char	*tmp;

	if (c)
	{
		tmp = encode_utf8((int[]){c, 0});
		write(1, tmp, 1 + _CHSIZE((unsigned)c));
		ft_memdel(&tmp);
	}
}

/*
**	Prints a character to stdout.
**	Can handle unicode characters.
**	Utilizes fast output calculation.
**	Do not to use for writing strings of characters. Use ft_putstr.
*/
