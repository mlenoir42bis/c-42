/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/23 10:45:02 by mlenoir           #+#    #+#             */
/*   Updated: 2015/09/24 23:43:30 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

char 	get_char(int value, t_bsq *bsq)
{
	if (value == 0)
		return (bsq->data->c_block);
	else if (value == 1)
		return (bsq->data->c_null);
	else if (value == 2)
		return (bsq->data->c_full);
	return ('?');
}

int		get_int(char c, t_data *data)
{
	if(c == data->c_null)
		return (1);
	return (0);
}

void	ft_display_tab(t_data *data)
{
	int i;
	int j;

	i = 0;
	while (i < data->height)
	{
		j = 0;
		while (j < data->width)
		{
			ft_putchar(data->tab[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	ft_display_tab_int(t_data *data)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < data->height)
	{
		j = 0;
		while (j < data->width)
		{
			ft_putnbr(data->tabi[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void			print(t_bsq *bsq)
{	
	int x;
	int y;

	x = 0;
	y = 0;
	while (x < bsq->data->width)
	{
		y = 0;
		while (y < bsq->data->height)
		{
			if (!(x  >= bsq->solution->x && x <= bsq->solution->x + bsq->solution->length) ||
				!(y  >= bsq->solution->y && y <= bsq->solution->y + bsq->solution->length))
			{
				ft_putchar(get_char(bsq->data->tabi[x][y], bsq));
			}
			else
				ft_putchar(get_char(2, bsq));
			y++;
		}
		ft_putchar('\n');
		x++;
	}
}
