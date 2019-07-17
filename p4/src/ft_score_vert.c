/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_score_vert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/28 14:03:45 by mlenoir           #+#    #+#             */
/*   Updated: 2016/02/28 21:53:41 by pbenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../p4.h"

int			ft_score_vert(t_p4 *p4)
{
	int		i;
	int		ct;

	ct = 0;
	i = p4->lgn;
	while (i < p4->mx_lgn && p4->tab[i][p4->col] == p4->player)
	{
		ct++;
		i++;
	}
	return (ct);
}
