/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 04:58:47 by viwade            #+#    #+#             */
/*   Updated: 2018/11/15 00:59:16 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (!alst || !del || !alst[0])
		return ;
	del(alst[0]->content, alst[0]->content_size);
	while ((alst[0] = alst[0]->next))
		del(alst[0]->content, alst[0]->content_size);
	ft_memdel((void**)alst);
	ft_memdel((void **)&alst);
}
