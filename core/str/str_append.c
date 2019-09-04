/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_append.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 20:55:41 by viwade            #+#    #+#             */
/*   Updated: 2019/09/04 03:58:47 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#define FREE_NONE	0
#define FREE_LEFT	1
#define FREE_RIGHT	2
#define FREE_ALL	3
#define DEL(x)			ft_memdel((void**)x)
#define APPEND_0(s,a,b) {(s) = ft_strjoin(a,b);}
#define APPEND_1(s,a,b) {(s) = ft_strjoin(a,b);DEL(&a);}
#define APPEND_2(s,a,b) {(s) = ft_strjoin(a,b);DEL(&b);}
#define APPEND_3(s,a,b) {(s) = ft_strjoin(a,b);DEL(&a);DEL(&b);}
#define MODE_0(s,x,a,b) if(x==FREE_NONE)	APPEND_0(s,a,b)
#define MODE_1(s,x,a,b) if(x==FREE_LEFT)	APPEND_1(s,a,b)
#define MODE_2(s,x,a,b) if(x==FREE_RIGHT)	APPEND_2(s,a,b)
#define MODE_3(s,x,a,b) if(x==FREE_ALL)		APPEND_3(s,a,b)

char	*ft_append(const char *s1, const char *s2, int mode)
{
	void	*string;

	if ((unsigned)mode > FREE_ALL)
		ft_error("ft_append: no mode specified");
	string = 0;
	MODE_0(string, mode, s1, s2);
	MODE_1(string, mode, s1, s2);
	MODE_2(string, mode, s1, s2);
	MODE_3(string, mode, s1, s2);
	return (string);
}
