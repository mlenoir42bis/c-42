/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 15:41:02 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/23 22:52:04 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../select.h"

void				ft_switch_print(t_lstdbl *elem, int mode)
{
	if (elem->select && elem->live)
		ft_print_elem_cursor_reversed(elem->content, mode);
	else if (elem->select && !elem->live)
		ft_print_elem_reversed(elem->content, mode);
	else if (!elem->select && elem->live)
		ft_print_elem_cursor(elem->content, mode);
	else
	{
		if (!mode)
			ft_putendl(elem->content);
		else
			ft_putstr(elem->content);
	}
}
