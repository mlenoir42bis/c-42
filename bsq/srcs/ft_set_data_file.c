/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_data_file.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/21 23:59:29 by mlenoir           #+#    #+#             */
/*   Updated: 2015/09/24 23:01:17 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

int		ft_count_size_line_list(t_list *list)
{
	int i;
	
	i = 0;
	while (list->data != '\n')
	{
		list = list->next;
		i++;
	}
	return (i);
}

t_data		*ft_set_height_map(t_list *list, t_data *data)
{
	int i;
	char *line;

	line = (char*)malloc(sizeof(char) * data->width);
	i = 0;
	while (i <= data->width)
	{
		line[i] = list->data;
		list = list->next;	
		i++;
	}
	data->height = ft_atoi(line);
	free(line);
	return (data);
}

t_data		*ft_set_data_map(t_list *list, t_data *data)
{
	int i;
	char *line;
	
	line = (char*)malloc(sizeof(char) * data->width);
	i = 0;
	while (list->data != '\n')
	{
		line[i] = list->data;
		list = list->next;	
		i++;
	}
	data->c_null = line[i - 3];
	data->c_block = line[i - 2];
	data->c_full = line[i - 1];
	free(line);
	return (data);
}

void	ft_treat_data_list(t_list *list)
{
	t_data *data;
	t_bsq *bsq;

	data = ft_create_struct_data_file(&list);
	if (data->width >= 4)
	{
		data = ft_set_data_map(list, data);
		data = ft_set_height_map(list, data); 
		ft_list_clear_line(&list);
		data->width = ft_count_size_line_list(list);
		if (ft_switch_check(list, data) == 0)
		{
			data->tabi = ft_create_tab_int(list, data);
//data->tab = ft_create_tab_src(list, data);
			//ft_display_tab_int(data);
			bsq = init_bsq(data);
			resolve(&bsq);
//ft_display_tab_int(bsq);
//ft_putnbr(bsq->param->tabi[1][4]);
		}
		else
		{
			ft_putstr("error lenght file");
			ft_list_clear(&list);
		}
	}
	else
	{
		ft_putstr("error first line");
		ft_list_clear(&list);
	}
}
