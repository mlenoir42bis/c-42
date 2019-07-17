/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tchek_end_game.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/25 15:33:47 by mlenoir           #+#    #+#             */
/*   Updated: 2016/02/28 03:49:52 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/libft.h"
#include "p4.h"

t_p4		*ft_tchek_end_game(t_p4 *p4)
{
	int		i;
	int		ct;

	i = 0;
	ct = 0;
	while (i < p4->mx_col)
	{
		if (p4->tab[0][i] != 0)
			ct++;
		i++;
	}
	p4->end = (ct != p4->mx_col) ? 0 : 1;
	return (p4);
}
