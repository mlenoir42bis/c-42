/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tchek_win_vert.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/28 14:14:05 by mlenoir           #+#    #+#             */
/*   Updated: 2016/02/28 21:40:56 by pbenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../p4.h"

t_p4		*ft_tchek_win_vert(t_p4 *p4)
{
	int		score;
	int		j;

	j = p4->lgn;
	score = ft_score_vert(p4);
	if (score >= 4)
	{
		while (j < p4->mx_lgn && p4->tab[j][p4->col] == p4->player)
		{
			p4->tab[j][p4->col] = 3;
			j++;
		}
		p4->win = 1;
	}
	return (p4);
}
