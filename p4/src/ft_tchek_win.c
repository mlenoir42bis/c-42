/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tchek_win.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/25 18:44:44 by mlenoir           #+#    #+#             */
/*   Updated: 2016/02/28 14:25:51 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../p4.h"

t_p4		*ft_tchek_win(t_p4 *p4)
{
	p4 = ft_tchek_win_horiz(p4);
	if (p4->win)
		return (p4);
	p4 = ft_tchek_win_vert(p4);
	if (p4->win)
		return (p4);
	p4 = ft_tchek_win_diag_gch(p4);
	if (p4->win)
		return (p4);
	p4 = ft_tchek_win_diag_drt(p4);
	if (p4->win)
		return (p4);
	return (p4);
}
