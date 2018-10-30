/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 20:10:20 by viwade            #+#    #+#             */
/*   Updated: 2018/07/30 21:56:42 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *p[2];

	p[0] = str;
	p[1] = to_find;
	if (!*to_find)
		return (str);
	while (*str)
	{
		to_find = p[1];
		while (*to_find++ == *p[0]++)
			if (!*to_find)
				return (str);
		p[0] = ++str;
	}
	return (0);
}
