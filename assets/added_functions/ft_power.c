/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 12:02:07 by viwade            #+#    #+#             */
/*   Updated: 2019/05/05 12:20:04 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Raises integer a to power of integer b.
*/

long long int
	ft_power(long long a, int b)
{
	if (!b)
		return (1);
	if (b < 0)
		return (0);
	while (--b)
		a *= a;
	return (a);
}
