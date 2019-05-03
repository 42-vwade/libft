/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 10:30:37 by viwade            #+#    #+#             */
/*   Updated: 2019/04/28 11:25:37 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "../libft_core/libft.h"

void
	ft_error(const char *message)
{
	if (!message || !message[0])
		write(1, "error\n", 0);
	else
		ft_putendl(message);
	exit(EXIT_FAILURE);
}