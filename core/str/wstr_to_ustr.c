/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wstr_to_ustr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 04:09:54 by viwade            #+#    #+#             */
/*   Updated: 2019/05/31 10:16:17 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int
	*wstr_to_ustr(wchar_t *s)
{
	int		*new;
	size_t	i;

	if ((i = !s) || !(new = (int*)malloc(ft_lstrlen(s) * sizeof(int) + 1)))
		return (NULL);
	while (s[i++])
		new[i - 1] = (int)s[i - 1];
	free(s);
	return (new);
}
