/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ia_play.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/28 13:16:43 by mlenoir           #+#    #+#             */
/*   Updated: 2016/02/28 23:26:59 by pbenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../p4.h"

t_p4		*ft_kill_shot(t_p4 *p4)
{
	int		i;

	i = 0;
	while (i < p4->mx_col && p4->tab[i][p4->col] == 0)
		i++;
	p4->tab[i][p4->col] = 0;
	return (p4);
}

int			ft_score_ia(t_p4 *p4)
{
	int		score;
	int		ret;

	ret = 0;
	score = ft_score_vert(p4);
	if ((ret = ft_score_horiz(p4, 1)) > score)
		score = ret;
	if ((ret = ft_score_diag_gch(p4, 1)) > score)
		score = ret;
	if ((ret = ft_score_diag_drt(p4, 1)) > score)
		score = ret;
	return (score);
}

t_p4		*ft_best_possible(t_p4 *p4)
{
	int		ret;

	ret = 0;
	p4->must_shot = 0;
	p4->must_score = 0;
	p4->col = -1;
	while (++p4->col < p4->mx_col)
	{
		if (p4->tab[0][p4->col] == 0)
		{
			p4 = ft_add_shot(p4);
			if ((ret = ft_score_ia(p4)) > p4->must_score)
			{
				p4->must_score = ret;
				p4->must_shot = p4->col;
			}
			p4 = ft_kill_shot(p4);
		}
	}
	return (p4);
}

t_p4		*ft_ia_play(t_p4 *p4)
{
	int		must_shot;
	int		must_score;

	srand(time(NULL));
	p4 = ft_best_possible(p4);
	must_shot = p4->must_shot;
	must_score = p4->must_score;
	p4->player = 1;
	p4 = ft_best_possible(p4);
	if (must_score >= p4->must_score && must_score != 1)
		p4->col = must_shot;
	else if (must_score < p4->must_score)
		p4->col = p4->must_shot;
	else
		p4->col = rand() % (p4->mx_col);
	p4->player = 2;
	p4 = ft_add_shot(p4);
	return (p4);
}
