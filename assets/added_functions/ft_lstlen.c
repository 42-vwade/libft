/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 04:00:04 by viwade            #+#    #+#             */
/*   Updated: 2019/04/28 11:25:37 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_core/libft.h"

size_t	ft_lstlen(t_list *list)
{
	size_t	len;

	if (!list)
		return (0);
	len = 1;
	while (list)
		len += (list = list->next) ? 1 : 0;
	return (len);
}
