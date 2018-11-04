/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 05:45:30 by viwade            #+#    #+#             */
/*   Updated: 2018/11/04 08:45:51 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*map;
	t_list	*next;

	if (!lst || !f)
		return (NULL);
	if ((map = f(ft_lstnew(lst->content, lst->content_size))))
		while ((lst = lst->next))
		{
			if (!(next = f(ft_lstnew(lst->content, lst->content_size))))
				return (NULL);
			map->next = next;
			next = next->next;
		}
	return (map);
}
