/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdblprint_circ.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/19 05:39:58 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/23 18:44:39 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../select.h"

void			ft_lstdblprint_circ(t_lstdbl_in in)
{
	int			i;
	t_lstdbl	*tmp;

	tmp = in.first;
	i = -1;
	while (++i < in.len)
	{
		tmp->x = 0;
		tmp->y = i;
		ft_switch_print(tmp, 0);
		tmp = tmp->next;
	}
}

void			ft_lstdblprint_circ_rev(t_lstdbl_in in)
{
	int			i;
	t_lstdbl	*tmp;

	tmp = in.last;
	i = -1;
	while (++i < in.len * 2)
	{
		ft_putendl(tmp->content);
		tmp = tmp->prev;
	}
}
