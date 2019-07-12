/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 00:15:55 by viwade            #+#    #+#             */
/*   Updated: 2019/07/12 00:24:53 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _FT_SQRT	double ft_sqroot(double n){return(ft_sqrt(n));}

double
	ft_sqrt(double n)
{
	double	c;
	double	i;

	i = 1;
	c = 0;
	if (n < 0)
		return (0.0);
	if (!n)
		return (0.0);
	while (i)
	{
		while ((c + i) * (c + i) < n)
			c += i;
		i /= 10;
	}
	return (c);
}

_FT_SQRT;
