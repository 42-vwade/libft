/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_append.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 20:55:41 by viwade            #+#    #+#             */
/*   Updated: 2019/09/03 21:33:48 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#define FREE_BOTH	0
#define FREE_LEFT	1
#define FREE_RIGHT	2
#define APPEND_0(s,a,b) {(s) = ft_strjoin(a,b);ft_memdel(&a);ft_memdel(&b);}
#define APPEND_1(s,a,b) {(s) = ft_strjoin(a,b);ft_memdel(&a);}
#define APPEND_2(s,a,b) {(s) = ft_strjoin(a,b);ft_memdel(&b);}
#define MODE_0(s,x,a,b) if(x==FREE_BOTH)	APPEND_0(s,a,b)
#define MODE_1(s,x,a,b) if(x==FREE_LEFT)	APPEND_1(s,a,b)
#define MODE_2(s,x,a,b) if(x==FREE_RIGHT)	APPEND_2(s,a,b)

char	*ft_append(const char *s1, const char *s2, int mode)
{
	char	*string;
	
	if (mode != FREE_BOTH || mode != FREE_LEFT || mode != FREE_RIGHT)
		ft_error("ft_append: no mode specified");
	string = 0;
	MODE_0(string, mode, s1, s2);
	MODE_1(string, mode, s1, s2);
	MODE_2(string, mode, s1, s2);
	return (string)
}
