/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 05:45:30 by viwade            #+#    #+#             */
/*   Updated: 2018/11/16 13:28:50 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*map;

	if (lst && f)
		if ((map = (t_list *)malloc(sizeof(*map))))
		{
			map->content = f(lst->content);
			map->next = ft_lstmap(lst->next, f);
			return (map);
		}
	return (NULL);
}
