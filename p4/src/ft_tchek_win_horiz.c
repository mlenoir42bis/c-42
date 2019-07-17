/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tchek_win_horiz.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/28 14:14:45 by mlenoir           #+#    #+#             */
/*   Updated: 2016/02/28 19:26:29 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../p4.h"

t_p4		*ft_tchek_win_horiz(t_p4 *p4)
{
	int		score;
	int		j;

	j = p4->col;
	score = ft_score_horiz(p4, 0);
	if (score >= 4)
	{
		while (j < p4->mx_col && p4->tab[p4->lgn][++j] == p4->player)
			p4->tab[p4->lgn][j] = 3;
		j = p4->col + 1;
		while (j > 0 && p4->tab[p4->lgn][--j] == p4->player)
			p4->tab[p4->lgn][j] = 3;
		p4->win = 1;
	}
	return (p4);
}
