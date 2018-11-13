/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 23:49:16 by viwade            #+#    #+#             */
/*   Updated: 2018/11/13 13:20:26 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int
	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int		i;

	i = 0;
	while (n--)
		if (s1[i] != s2[i])
			break ;
		else if (!s1[i] && !s2[i])
			return (0);
		else if (!s1[i] || !s2[i])
			break ;
		else
			i++;
	return ((unsigned char)(s1[i] - s2[i]));
}
