/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 19:07:14 by viwade            #+#    #+#             */
/*   Updated: 2018/11/07 07:48:31 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char const *s, int fd)
{
	if ((unsigned)fd != 0xFFFFFFFF)
	{
		s = ft_strjoin(s, "\n");
		ft_putstr(s);
		ft_strdel((char **)&s);
	}
}
