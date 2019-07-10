/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 15:02:18 by viwade            #+#    #+#             */
/*   Updated: 2019/07/10 15:37:09 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	HEXADECIMAL TO LONG
*/

char
	hex_value(char c)
{
	if (48 <= c && c <= 57)
		return (c - 48);
	else if (65 <= c && c <= 70)
		return (c - 65);
	else if (97 <= c && c <= 102)
		return (c - 97);
	else
		return (-1);
}

long long
	ft_hextol(char *s)
{
	long long	num;
	char		val;

	num = 0;
	while ((9 <= s[0] && s[0] <= 13) || s[0] == 32)
		s++;
	while ((val = hex_value(s[0])) > -1 && hex_value(s[0]) < 16)
		num = num * 16 + val;
	return (num);
}
