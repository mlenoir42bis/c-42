/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getmaxlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/22 08:02:26 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/22 08:02:44 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../select.h"

int					ft_getmaxlen(t_lstdbl_in in)
{
	int				max;
	int				i;
	int				size;
	t_lstdbl		*tmp;

	max = 0;
	i = -1;
	tmp = in.first;
	while (++i < in.len)
	{
		size = ft_strlen(tmp->content);
		if (max < size)
			max = size;
		tmp = tmp->next;
	}
	return (max);
}
