/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 23:49:16 by viwade            #+#    #+#             */
/*   Updated: 2018/11/13 12:52:30 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int
	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 == *s2 && n--)
		if (!*s1++ || !*s2++)
			break ;
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}
