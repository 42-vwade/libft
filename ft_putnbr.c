/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 08:55:29 by viwade            #+#    #+#             */
/*   Updated: 2018/11/02 03:46:22 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr(int n)
{
	char	tmp;

	tmp = 0;
	if ((unsigned int)n >= 0x80000000)
	{
		ft_putchar('-');
		ft_putnbr(-1 * (n / 10));
		tmp = (char)(-1 * (n % 10) + 48);
		write(1, &tmp, 1);
		return ;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	tmp = (char)((n % 10) + 48);
	write(1, &tmp, 1);
}
