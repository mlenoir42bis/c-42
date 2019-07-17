/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tchek_win_diag_drt.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/28 14:24:55 by mlenoir           #+#    #+#             */
/*   Updated: 2016/02/28 19:28:57 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../p4.h"

t_p4		*ft_win_diag_drt1(t_p4 *p4)
{
	while (p4->i < p4->mx_lgn && p4->j >= 0
			&& p4->tab[p4->i][p4->j] == p4->player)
	{
		p4->tab[p4->i][p4->j] = 3;
		p4->i++;
		p4->j--;
	}
	return (p4);
}

t_p4		*ft_win_diag_drt2(t_p4 *p4)
{
	while (p4->j < p4->mx_lgn && p4->i >= 0
			&& p4->tab[p4->i][p4->j] == p4->player)
	{
		p4->tab[p4->i][p4->j] = 3;
		p4->i--;
		p4->j++;
	}
	return (p4);
}

t_p4		*ft_tchek_win_diag_drt(t_p4 *p4)
{
	int		score;

	score = ft_score_diag_drt(p4, 0);
	p4->i = p4->lgn;
	p4->j = p4->col;
	if (score >= 4)
	{
		p4 = ft_win_diag_drt1(p4);
		p4->j = p4->col + 1;
		p4->i = p4->lgn - 1;
		p4->win = 1;
	}
	return (p4);
}
