/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 22:32:21 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/23 23:09:31 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../select.h"

void				ft_term_init_var(char *argv[])
{
	g_term.cursor_x = 0;
	g_term.cursor_y = 0;
	ft_getwinsize(1);
	g_term.max_strlen = 0;
	g_term.nb_col = 0;
	ft_lstdblinit(&g_term.lst_circ);
	if (!ft_transform_tab_in_dblst_circ(argv + 1, &g_term.lst_circ))
		ft_stop(0);
	g_term.lst_circ.first->live = 1;
	g_term.lst_circ.first->prev = g_term.lst_circ.last;
	g_term.max_strlen = ft_getmaxlen(g_term.lst_circ);
	g_term.nb_col = ft_div_rev();
}

t_term_live			ft_term_init(void)
{
	ft_get_termattr(&g_term.term_save);
	ft_get_termattr(&g_term.term_live);
	g_term.term_live->c_lflag &= ~(ICANON);
	g_term.term_live->c_lflag &= ~(ECHO);
	g_term.term_live->c_cc[VMIN] = 1;
	g_term.term_live->c_cc[VTIME] = 0;
	ft_set_termattr(&g_term.term_live);
	return (g_term);
}
