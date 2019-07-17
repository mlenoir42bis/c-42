/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_end.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 22:36:47 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/23 23:14:16 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../select.h"

void				ft_keep(int ac)
{
	if (ac)
		;
	ft_term_init();
}

void				ft_end_display(unsigned int buf)
{
	if (buf == T_ENT)
	{
		ft_cmdput("cl");
		ft_lstdblprint_circ_sep(g_term.lst_circ, ' ');
		ft_set_termattr(&g_term.term_save);
		ft_lstdbldel_circ(&g_term.lst_circ);
		exit(0);
	}
}

void				ft_end(unsigned int buf)
{
	if (buf == T_ESC)
	{
		ft_cmdput("cl");
		ft_set_termattr(&g_term.term_save);
		ft_lstdbldel_circ(&g_term.lst_circ);
		exit(0);
	}
}
