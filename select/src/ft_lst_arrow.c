/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_arrow.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 16:13:45 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/23 23:19:45 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../select.h"

int				ft_lst_arrow_b(void)
{
	t_lstdbl	*tmp;
	int			i;

	i = -1;
	tmp = g_term.lst_circ.first;
	while (++i < (g_term.lst_circ.len * 2))
	{
		if (tmp->live)
		{
			tmp->next->live = 1;
			tmp->live = 0;
			g_term.cursor_x = tmp->next->x;
			g_term.cursor_y = tmp->next->y;
			return (1);
		}
		tmp = tmp->next;
	}
	return (0);
}

int				ft_lst_arrow_u(void)
{
	t_lstdbl	*tmp;
	int			i;

	i = -1;
	tmp = g_term.lst_circ.first;
	while (++i < (g_term.lst_circ.len * 2))
	{
		if (tmp->live)
		{
			tmp->prev->live = 1;
			tmp->live = 0;
			g_term.cursor_x = tmp->prev->x;
			g_term.cursor_y = tmp->prev->y;
			return (1);
		}
		tmp = tmp->next;
	}
	return (0);
}

int				ft_lst_arrow_r(void)
{
	t_lstdbl	*tmp;
	int			i;
	int			j;

	i = -1;
	j = -1;
	tmp = g_term.lst_circ.first;
	while (++i < (g_term.lst_circ.len * 2))
	{
		if (tmp->live)
		{
			tmp->live = 0;
			while (++j < g_term.nb_col)
				tmp = tmp->next;
			g_term.cursor_x = tmp->x;
			g_term.cursor_y = tmp->y;
			tmp->live = 1;
			return (1);
		}
		tmp = tmp->next;
	}
	return (0);
}

int				ft_lst_arrow_l(void)
{
	t_lstdbl	*tmp;
	int			i;
	int			j;

	i = -1;
	j = -1;
	tmp = g_term.lst_circ.first;
	while (++i < (g_term.lst_circ.len * 2))
	{
		if (tmp->live)
		{
			tmp->live = 0;
			while (++j < g_term.nb_col)
				tmp = tmp->prev;
			g_term.cursor_x = tmp->x;
			g_term.cursor_y = tmp->y;
			tmp->live = 1;
			return (1);
		}
		tmp = tmp->next;
	}
	return (0);
}
