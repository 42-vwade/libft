/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 19:19:31 by viwade            #+#    #+#             */
/*   Updated: 2019/04/28 11:24:32 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_core/libft.h"

size_t	ft_arrlen(char **ar)
{
	unsigned long long int	len;

	len = 0;
	if (!ar)
		ft_error("Parameter is NULL. Returning 0.");
	if (ar)
		while (ar[len])
			++len;
	return (len);
}
