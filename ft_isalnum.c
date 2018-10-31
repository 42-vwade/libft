/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 02:20:13 by viwade            #+#    #+#             */
/*   Updated: 2018/10/29 17:38:46 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(int c)
{
	if (((unsigned char)c >= 'A' && (unsigned char)c <= 'Z')\
			|| ((unsigned char)c >= 'a' && (unsigned char)c <= 'z')\
			|| ((unsigned char)c >= '0' && (unsigned char)c <= '9'))
		return (1);
	else
		return (0);
}
