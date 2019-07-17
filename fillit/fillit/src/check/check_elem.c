/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_elem.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 16:53:23 by mlenoir           #+#    #+#             */
/*   Updated: 2016/01/08 18:11:56 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/libft/libft.h"
#include "../../includes/fillit.h"

static int	switch_around(t_elem *elem, int i, int j)
{
	int		ct;

	ct = 0;
	if (i > 0)
		if (elem->tab[elem->elem_n][i - 1][j] == '#')
			ct++;
	if (i < 3)
		if (elem->tab[elem->elem_n][i + 1][j] == '#')
			ct++;
	if (j < 3)
		if (elem->tab[elem->elem_n][i][j + 1] == '#')
			ct++;
	if (j > 0)
		if (elem->tab[elem->elem_n][i][j - 1] == '#')
			ct++;
	return (ct);
}

static int	ft_treat_check(t_elem *elem)
{
	int		i;
	int		j;
	int		ct;

	ct = 0;
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (elem->tab[elem->elem_n][i][j] == '#')
				ct += switch_around(elem, i, j);
			j++;
		}
		i++;
	}
	return (ct);
}

int			check_elem(t_elem *elem)
{
	size_t	i;
	int		ct;

	i = 0;
	while (i < elem->nb_elem)
	{
		elem->elem_n = i;
		ct = ft_treat_check(elem);
		if (ct != 6 && ct != 8)
			return (0);
		i++;
	}
	return (1);
}
