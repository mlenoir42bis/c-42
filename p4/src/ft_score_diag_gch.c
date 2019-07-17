/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_score_diag_gch.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/28 14:01:09 by mlenoir           #+#    #+#             */
/*   Updated: 2016/02/28 23:11:26 by pbenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../p4.h"

t_p4		*ft_diag_gch1(t_p4 *p4)
{
	p4->i = p4->lgn;
	p4->j = p4->col;
	while (p4->i >= 0 && p4->j >= 0 && p4->tab[p4->i][p4->j] == p4->player)
	{
		p4->score += 1;
		p4->i--;
		p4->j--;
	}
	return (p4);
}

t_p4		*ft_diag_gch2(t_p4 *p4)
{
	p4->i = p4->lgn + 1;
	p4->j = p4->col + 1;
	while (p4->i < p4->mx_lgn && p4->j < p4->mx_col
			&& p4->tab[p4->i][p4->j] == p4->player)
	{
		p4->score += 1;
		p4->i++;
		p4->j++;
	}
	return (p4);
}

int			ft_score_diag_gch(t_p4 *p4, int mode)
{
	int		on;

	on = 0;
	p4->score = 0;
	p4 = ft_diag_gch1(p4);
	if (p4->i >= 0 && p4->j >= 0 && p4->tab[p4->i][p4->j] == 0)
		on = 1;
	p4 = ft_diag_gch2(p4);
	if (p4->i < p4->mx_lgn && p4->j < p4->mx_col && p4->tab[p4->i][p4->j] == 0)
		on = 1;
	if (on == 0 && mode && p4->score < 4)
		p4->score = 0;
	return (p4->score);
}
