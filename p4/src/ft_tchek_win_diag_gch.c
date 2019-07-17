/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tchek_win_diag_gch.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/28 14:30:24 by mlenoir           #+#    #+#             */
/*   Updated: 2016/02/28 19:12:10 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../p4.h"

t_p4		*ft_win_diag_gch1(t_p4 *p4)
{
	while (p4->j < p4->mx_col && p4->i < p4->mx_lgn
			&& p4->tab[p4->i][p4->j] == p4->player)
	{
		p4->tab[p4->i][p4->j] = 3;
		p4->i++;
		p4->j++;
	}
	return (p4);
}

t_p4		*ft_win_diag_gch2(t_p4 *p4)
{
	while (p4->j >= 0 && p4->i >= 0 && p4->tab[p4->i][p4->j] == p4->player)
	{
		p4->tab[p4->i][p4->j] = 3;
		p4->i--;
		p4->j--;
	}
	return (p4);
}

t_p4		*ft_tchek_win_diag_gch(t_p4 *p4)
{
	int		score;

	score = ft_score_diag_gch(p4, 0);
	p4->i = p4->lgn;
	p4->j = p4->col;
	if (score >= 4)
	{
		p4 = ft_win_diag_gch1(p4);
		p4->j = p4->col - 1;
		p4->i = p4->lgn - 1;
		p4 = ft_win_diag_gch2(p4);
		p4->win = 1;
	}
	return (p4);
}
