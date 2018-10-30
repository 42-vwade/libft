/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 08:55:29 by viwade            #+#    #+#             */
/*   Updated: 2018/10/29 17:08:25 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	tmp;

	tmp = 0;
	if ((unsigned int)nb >= 0x80000000)
	{
		ft_putchar('-');
		ft_putnbr(-1 * (nb / 10));
		tmp = (char)(-1 * (nb % 10) + 48);
		write(1, &tmp, 1);
		return ;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	tmp = (char)((nb % 10) + 48);
	write(1, &tmp, 1);
}
