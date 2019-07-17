/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_shot.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/25 16:49:45 by mlenoir           #+#    #+#             */
/*   Updated: 2016/02/28 12:45:34 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../p4.h"

t_p4		*ft_add_shot(t_p4 *p4)
{
	int		i;

	i = 0;
	while (i < p4->mx_lgn && p4->tab[i][p4->col] == 0)
		i++;
	if (i != 0)
	{
		--i;
		if (p4->player == 1)
			p4->tab[i][p4->col] = 1;
		else
			p4->tab[i][p4->col] = 2;
	}
	p4->lgn = i;
	return (p4);
}
