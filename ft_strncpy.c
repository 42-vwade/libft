/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 15:46:08 by viwade            #+#    #+#             */
/*   Updated: 2018/07/30 21:57:55 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *cpy;

	cpy = dest;
	while (n-- > 0)
		if (!*src)
			while (*dest)
				*dest++ = '\0';
		else
			*dest++ = *src++;
	return (cpy);
}