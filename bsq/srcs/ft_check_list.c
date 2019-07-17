/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/22 13:23:32 by mlenoir           #+#    #+#             */
/*   Updated: 2015/09/24 19:00:11 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

int		ft_check_data(t_list *list, t_data *data)
{
		while (list->next != NULL)
		{
			if (list->data != data->c_null && list->data != data->c_block && list->data != '\n')
			{
				ft_putstr("charactere unknown detected\n");
				return (1);
			}
			list = list->next;
		}
	return (0);
}

int		ft_check_lenght_line(t_list *list, t_data *data)
{
	int i;

	i = 0;
	if (list != NULL)
	{
		while (list->next != NULL)
		{
			if (list->data == '\n' && i != data->width)
			{
				ft_putstr("at least one size line false");
				return (1);
			}
			if (list->data == '\n')
				i = -1;
			i++;
			list = list->next;
		}
	}
	return (0);
}

int		ft_switch_check(t_list *list, t_data *data)
{
	if (ft_check_lenght_line(list, data) == 1)
		return (1);
	if (ft_check_data(list, data) == 1)
		return (1);
	return (0);
}
