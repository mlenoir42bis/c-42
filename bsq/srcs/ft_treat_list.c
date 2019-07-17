/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/22 00:03:20 by mlenoir           #+#    #+#             */
/*   Updated: 2015/09/22 18:23:47 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

void		ft_list_push_back(t_list **root, char data)
{
	t_list *news_elem;
	t_list *tmp;

	tmp = *root;
	news_elem = ft_create_elem(data);
	if (*root != NULL)
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = news_elem;
	}
	else
	{
		*root = news_elem;
	}
}

int			ft_list_size(t_list **root)
{
	int		i;
	t_list	*tmp;

	tmp = *root;
	i = 1;
	if (*root != NULL)
	{
		while (tmp->next != NULL)
		{
			i++;
			tmp = tmp->next;
		}
		return (i);
	}
	return (0);
}

void		ft_list_clear(t_list **begin_list)
{
		t_list *tmp;

		if (*begin_list)
		{
			tmp = *begin_list;
			while (tmp->next != NULL)
			{
				tmp = (*begin_list)->next;
				free(*begin_list);
				*begin_list = tmp;
			}
			*begin_list = NULL;
		}
}

void		ft_list_clear_line(t_list **begin_list)
{
	t_list *tmp;

	if (*begin_list)
	{
		tmp = *begin_list;
		while (tmp->data != '\n')
		{
			tmp = (*begin_list)->next;
			free(*begin_list);
			*begin_list = tmp;
		}
			tmp = (*begin_list)->next;
			free(*begin_list);
			*begin_list = tmp;
	}
}
