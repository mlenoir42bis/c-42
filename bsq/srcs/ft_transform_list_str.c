/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_transform_list_str.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/22 08:11:40 by mlenoir           #+#    #+#             */
/*   Updated: 2015/09/24 19:14:48 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../includes/header.h"

char	*ft_create_str_line(t_list *list, t_data *data)
{
	char *str;
	int i;

	i = 0;
	str = (char*)malloc(sizeof(char) * data->width);
	while (list->data != '\n')
	{
		str[i] = list->data;
		list = list->next;
		i++;
	}
	return (str);
}

char	**ft_create_tab_src(t_list *list, t_data *data)
{
	char **tab;
	int i;
	
	i = 0;
	tab = (char**)malloc(sizeof(char*) * data->width * data->height);
	while (i < data->height)
	{
		tab[i] = ft_create_str_line(list, data);
		ft_list_clear_line(&list);
		i++;
	}
	return (tab);
}

int		*ft_create_int_line(t_list *list, t_data *data)
{
	int *str;
	int i;
	
	str = 0;
	i = 0;
	str = (int*)malloc(sizeof(int) * data->width);
	while (list->data != '\n')
	{
		str[i] = get_int(list->data, data);
		list = list->next;
		i++;
	}
	return (str);
}

int		**ft_create_tab_int(t_list	*list, t_data *data)
{
	int **tabi;
	int i;
	
	i = 0;
	tabi = (int**)malloc(sizeof(int*) * data->width * data->height);
	while (i < data->height)
	{
		tabi[i] = ft_create_int_line(list, data);
		ft_list_clear_line(&list);
		i++;
	}
	return (tabi);
}
