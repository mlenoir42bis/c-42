/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/24 22:57:25 by mlenoir           #+#    #+#             */
/*   Updated: 2016/02/28 23:31:29 by pbenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../p4.h"

void	ft_display_tab2(t_p4 *p4, int i, int j)
{
	if (p4->tab[i][j] == 1)
		ft_printf("\33[36m|\33[0m  \33[33m%c\33[0m  ", 'o');
	else if (p4->tab[i][j] == 2)
		ft_printf("\33[36m|\33[0m  \33[31m%c\33[0m  ", 'x');
	else if (p4->tab[i][j] == 3 && p4->player == 1)
		ft_printf("\33[36m|\33[0m  \33[32m%c\33[0m  ", 'o');
	else if (p4->tab[i][j] == 3 && p4->player == 2)
		ft_printf("\33[36m|\33[0m  \33[32m%c\33[0m  ", 'x');
	else
		ft_printf("\33[36m|\33[0m     ");
}

void	ft_display_tab3(t_p4 *p4)
{
	int i;

	i = 0;
	while (++i <= p4->mx_col)
	{
		if (i < 10)
			ft_printf("  c%d  ", i);
		else
			ft_printf("  c%d ", i);
	}
}

void	ft_display_tab(t_p4 *p4)
{
	int			i;
	int			j;

	i = -1;
	j = -1;
	while (++j < p4->mx_col)
		ft_printf("\33[36m+-----\33[0m");
	ft_printf("\33[36m+\33[0m\n");
	while (++i < p4->mx_lgn)
	{
		j = -1;
		while (++j < p4->mx_col)
		{
			ft_display_tab2(p4, i, j);
		}
		ft_printf("\33[36m|\33[0m\n");
		j = -1;
		while (++j < p4->mx_col)
			ft_printf("\33[36m+-----\33[0m");
		ft_printf("\33[36m+\33[0m\n");
	}
	ft_display_tab3(p4);
	ft_putstr("\n");
}
