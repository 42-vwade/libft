/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viwade <viwade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 20:07:34 by viwade            #+#    #+#             */
/*   Updated: 2019/05/13 18:39:42 by viwade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct		s_basic_list
{
	struct s_list	*next;
	void			*data;
}					t_basic_list;

t_basic_list				*ft_create_elem(void *data);

#endif
