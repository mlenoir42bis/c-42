/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolv.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/24 04:08:04 by mlenoir           #+#    #+#             */
/*   Updated: 2015/09/24 23:45:43 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

void			incr(t_solution **solv, int x, int y)
{
	(*solv)->x = x;
	(*solv)->y = y;
	(*solv)->length++;
}

int				verification(t_bsq *bsq, int x , int y)
{
	int i;
	int j;

	i = x;
	while (i <= x + bsq->solution->length)
	{
		j = y;
		while (j <= y + bsq->solution->length)
		{
			if (bsq->data->tabi[i][j] == 0)
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int 			resolve(t_bsq **bsq)
{
	int tmp;
	int x;
	int y;

	x = 0;
	y = 0;
	tmp = 1;
	while (x + (*bsq)->solution->length < (*bsq)->data->width)
	{
		y = 0;
		while (y + (*bsq)->solution->length < (*bsq)->data->width)
		{
			if ((*bsq)->data->tabi[x][y] != 0 && verification((*bsq), x, y))
			{
				while((tmp = get_square(*bsq, x, y)) == 0)
				{
					incr(&(*bsq)->solution, x, y);
				}
			}
			y++;
		}
		x++;
	}
	print((*bsq));
			
	return (0);
}

int 			get_square(t_bsq *bsq, int x, int y)
{
	int xt;
	int yt;
	int i;

	yt = y + bsq->solution->length + 1;
	i = x;
	xt = x;
	while ( bsq->data->tabi[xt][yt] != 0 && xt <= x + bsq->solution->length && xt < bsq->data->width)
		xt++;
	if (bsq->data->tabi[xt][yt] == 0 || xt == bsq->data->width)
		return (2);
	xt = x + bsq->solution->length + 1;
	i = x;
	yt = y;
	while ( bsq->data->tabi[xt][yt] != 0 && yt <= y + bsq->solution->length && yt < bsq->data->height)
		yt++;
	if (bsq->data->tabi[xt][yt] == 0 || yt == bsq->data->height)
		return (2);
	return (0);
}
