/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    :+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 10:54:25 by viwade            #+#    #+#             */
/*   Updated: 2018/10/29 01:11:21 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int		num;
	char	tmp;

	num = 0;
	if (str)
	{
	while ((*str > 0 && *str <= 32) || *str == 127)
		str++;
	tmp = *str;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
		num = num * 10 + (*str++ - 48);
	num = (tmp == '-') ? -num : num;
	}
	return (num);
}
