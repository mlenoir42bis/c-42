/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch_move.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 16:10:30 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/23 23:21:21 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../select.h"

void			ft_switch_move_1col(unsigned int buf)
{
	if (buf == T_AR_B || buf == T_TAB)
		ft_lst_arrow_b();
	else if (buf == T_AR_U)
		ft_lst_arrow_u();
}

void			ft_switch_move_ncol(unsigned int buf)
{
	if (buf == T_AR_B)
		ft_lst_arrow_r();
	else if (buf == T_AR_U)
		ft_lst_arrow_l();
	else if (buf == T_AR_R || buf == T_TAB)
		ft_lst_arrow_b();
	else if (buf == T_AR_L)
		ft_lst_arrow_u();
}
