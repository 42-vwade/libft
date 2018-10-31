/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 13:38:07 by viwade            #+#    #+#             */
/*   Updated: 2018/08/01 02:27:15 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char				*cpy;
	unsigned int		i;
	unsigned int		len;

	cpy = dest;
	i = 0;
	len = 0;
	while (*(dest = cpy + len))
		++len;
	if (size > 0 && size > len && *src)
		while (i < size - len - 1)
			if (*dest++ = *src++)
				i++;
			else
				*dest = '\0';
	dest = cpy;
	return (len + i);
}

