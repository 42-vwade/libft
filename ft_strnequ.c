/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 20:46:53 by viwade            #+#    #+#             */
/*   Updated: 2018/11/12 16:03:46 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int
	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!n)
		return (1);
	if (!s1 || !s2)
		return (0);
	while (n--)
		if (*s1++ != *s2++)
			break ;
		else if (!*s1 || !*s2)
			break ;
	return ((s1[0] == s2[0]) ? 1 : 0);
}
