/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 06:17:09 by viwade            #+#    #+#             */
/*   Updated: 2019/05/13 19:08:15 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void
	ft_lstpush(t_list **list, t_list *new)
{
	t_list	*push;

	if (!list[0])
	{
		list[0] = new;
		return ;
	}
	push = list[0];
	while ((push->next))
		push = push->next;
	if (!push->content)
	{
		ft_lstdelone(list, ft_del);
		push = new;
	}
	else
		push->next = new;
}
