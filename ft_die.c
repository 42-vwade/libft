/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_die.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 10:30:37 by viwade            #+#    #+#             */
/*   Updated: 2018/11/10 14:44:23 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void
	ft_die(const char *message)
{
	if (!message || !message[0])
		write(1, "Invalid error message.\n", 0);
	else
		ft_putendl(message);
}
