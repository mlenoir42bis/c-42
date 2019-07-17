/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 22:35:20 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/23 23:15:18 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../select.h"

int					ft_display(void)
{
	if (g_term.ws.ws_row < g_term.lst_circ.len)
	{
		if (g_term.nb_col < 1 || (g_term.ws.ws_row * g_term.nb_col)
				< g_term.lst_circ.len)
			ft_putendl(" ----- \n|too  |\n|small|\n ----- ");
		else
			ft_display_lst(g_term.lst_circ);
	}
	else
		ft_lstdblprint_circ(g_term.lst_circ);
	ft_get_cursor(g_term.lst_circ);
	ft_cmdgoto(g_term.cursor_x, g_term.cursor_y);
	return (0);
}
