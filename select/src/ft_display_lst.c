/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_lst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 22:34:10 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/23 23:14:44 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../select.h"

int					ft_display_lst(t_lstdbl_in in)
{
	t_position		pos;
	t_lstdbl		*tmp;

	pos = ft_init_position();
	pos.j = 1;
	pos.i = -1;
	tmp = in.first;
	while (++pos.i < in.len)
	{
		tmp->x = pos.x;
		tmp->y = pos.y;
		pos.x = pos.x + g_term.max_strlen + 1;
		if (++pos.j > g_term.nb_col)
		{
			pos.y = pos.y + 1;
			pos.j = 1;
			pos.x = 0;
		}
		ft_cmdgoto(tmp->x, tmp->y);
		ft_switch_print(tmp, 1);
		tmp = tmp->next;
	}
	return (0);
}
