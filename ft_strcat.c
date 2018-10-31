/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 03:32:00 by viwade            #+#    #+#             */
/*   Updated: 2018/10/30 22:00:08 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, const char *src)
{
	int		i;
	char	*dup;

	i = 0;
	dup = dest;
	if (!dest || !src)
		return (dest);
	while (*dup)
		dup++;
	while (src[i++])
		dup[i - 1] = src[i - 1];
	return (dest);
}
