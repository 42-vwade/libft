/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 11:02:07 by viwade            #+#    #+#             */
/*   Updated: 2019/09/02 21:58:39 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_strjoin_free(char const *s1, char const *s2)
{
	FT_STR	new;

	if (!s1 && !s2)
		return (NULL);
	else if ((!s1 && !(new = ft_strdup(s2))) || (!s2 && !(new = ft_strdup(s1))))
		ft_error("ft_strjoin_free: memory allocation error 1");
	else if (!(new = ft_strjoin(s1, s2)))
		ft_error("ft_strjoin_free: memory allocation error 2");
	if (s1)
		ft_free((void*)s1);
	if (s2)
		ft_free((void*)s2);
	return ((FT_STR)new);
}
