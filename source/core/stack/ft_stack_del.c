/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_del.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 16:56:19 by viwade            #+#    #+#             */
/*   Updated: 2019/09/26 16:58:15 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	ft_stack_del(t_stack *stack)
{
	if (!stack || !stack->top)
		return ;
	while (stack->top)
		ft_stack_pop(stack);
}
