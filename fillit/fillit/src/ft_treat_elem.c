/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_elem.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 17:06:31 by mlenoir           #+#    #+#             */
/*   Updated: 2016/01/08 18:32:31 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft/libft.h"
#include "../includes/fillit.h"

static t_elem	*ft_calc_pos(t_elem *elem)
{
	int			i;

	i = 1;
	while (i < 4)
	{
		elem->pos[elem->elem_n][i][0] -= elem->pos[elem->elem_n][0][0];
		elem->pos[elem->elem_n][i][1] -= elem->pos[elem->elem_n][0][1];
		i++;
	}
	return (elem);
}

static t_elem	*ft_set_pos(t_elem *elem)
{
	int			i;
	int			j;
	int			diese;

	diese = 0;
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (elem->tab[elem->elem_n][i][j] == '#')
			{
				elem->pos[elem->elem_n][diese][0] = i;
				elem->pos[elem->elem_n][diese][1] = j;
				diese++;
			}
			j++;
		}
		i++;
	}
	return (elem);
}

t_elem			*ft_treat_elem(t_elem *elem)
{
	size_t		i;

	i = 0;
	while (i < elem->nb_elem)
	{
		elem->elem_n = i;
		elem = ft_set_pos(elem);
		elem = ft_calc_pos(elem);
		i++;
	}
	return (elem);
}
