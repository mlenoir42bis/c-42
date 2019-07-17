/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_score_horiz.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/28 14:05:21 by mlenoir           #+#    #+#             */
/*   Updated: 2016/02/28 23:14:15 by pbenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../p4.h"

int			ft_score_horiz(t_p4 *p4, int mode)
{
	int		j;
	int		on;

	on = 0;
	p4->score = 0;
	j = p4->col - 1;
	while (j < p4->mx_col && p4->tab[p4->lgn][++j] == p4->player)
		p4->score += 1;
	if (j < p4->mx_col && p4->tab[p4->lgn][j] == 0)
		on = 1;
	j = p4->col;
	while (j > 0 && p4->tab[p4->lgn][--j] == p4->player)
		p4->score += 1;
	if (j >= 0 && p4->tab[p4->lgn][j] == 0)
		on = 1;
	if (on == 0 && mode && p4->score < 4)
		p4->score = 0;
	return (p4->score);
}
