/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/22 07:59:34 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/25 11:03:04 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../select.h"

void				ft_stop(int ac)
{
	if (ac)
		;
	ft_cmdput("cl");
	ft_set_termattr(&g_term.term_save);
	ft_lstdbldel_circ(&g_term.lst_circ);
	ft_putendl("\n---- this is the end stop ----");
	exit(0);
}
