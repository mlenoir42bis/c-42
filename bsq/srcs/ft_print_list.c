/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/22 04:34:09 by mlenoir           #+#    #+#             */
/*   Updated: 2015/09/22 04:36:17 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

void		ft_print_list(t_list *list)
{
	if (list != NULL)
	{
		while (list)
		{
			ft_putchar(list->data);
			list = list->next;
		}
	}
}

void		ft_print_line(t_list *list)
{
	if(list != NULL)
	{
		while (list->data != '\n')
		{
			ft_putchar(list->data);
			list = list->next;
		}
	}
}
