/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 10:54:25 by viwade            #+#    #+#             */
/*   Updated: 2018/11/04 08:42:22 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int		num;
	char	neg;

	num = 0;
	if (!str)
		return (num);
	while ((*str > 0 && *str <= 32) || *str == 127)
		str++;
	neg = *str;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
		num = num * 10 + (*str++ - 48);
	num = (neg == '-') ? -num : num;
	return (num);
}
