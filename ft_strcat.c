/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 03:32:00 by viwade            #+#    #+#             */
/*   Updated: 2018/10/30 18:46:28 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, const char *src)
{
	char	*dup;

	dup = dest;
	if (!dest || !src)
		return (dest);
	while (*dup)
		dup++;
	while (*src)
		*dup++ = *src++;
	return (dest);
}
