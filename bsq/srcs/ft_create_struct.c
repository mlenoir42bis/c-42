/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_struct.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/22 04:02:13 by mlenoir           #+#    #+#             */
/*   Updated: 2015/09/24 22:49:30 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

t_data		*ft_create_struct_data_file(t_list **list)
{
	t_data	*data;

	data = NULL;
	data = malloc(sizeof(t_data));
	data->height = 0;
	data->width = ft_count_size_line_list(*list);
	data->c_null = 0;
	data->c_block = 0;
	data->c_full = 0;
	data->tab = NULL;
	data->tabi = 0;
	return (data);
}

t_list		*ft_create_elem(char data)
{
	t_list *elem;
	
	elem = NULL;
	elem = malloc(sizeof(t_list));
	if (elem)
	{
		elem->data = data;
		elem->next = NULL;
	}
	return (elem);
}

t_bsq 		*init_bsq(t_data *data)
{
	t_bsq *bsq;

	bsq = malloc(sizeof(t_bsq));
	bsq->solution = malloc(sizeof(t_solution));
	bsq->data = malloc(sizeof(t_data));
	bsq->data = data;
	bsq->solution->x = 0;
	bsq->solution->y = 0;
	bsq->solution->length = -1;
	return (bsq);
}
