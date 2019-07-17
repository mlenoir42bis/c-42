/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 17:04:00 by mlenoir           #+#    #+#             */
/*   Updated: 2016/01/08 18:52:41 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft/libft.h"
#include "../includes/fillit.h"

t_map			*ft_update_x_y(t_map *map, size_t i, size_t j)
{
	map->x = i;
	map->y = j;
	if (j > map->size_map)
	{
		map->y = 0;
		if (i + 1 < map->size_map)
			map->x = i + 1;
	}
	return (map);
}

t_map			*ft_pos_elem(t_map *map, t_elem *elem, size_t i, size_t k)
{
	size_t		j;
	int			first;

	first = 0;
	while (i < map->size_map)
	{
		j = 0;
		if (!first++)
			j = k;
		while (j < map->size_map)
		{
			map = ft_update_x_y(map, i, j);
			if (map->map[i][j] == '.' && ft_tchek_elem_on_pos(map, elem))
			{
				map = ft_write_on_map(map, elem);
				return (map);
			}
			++j;
		}
		++i;
	}
	map->ispos = 0;
	return (map);
}

t_map			*ft_resolv(t_elem *elem, t_map *map)
{
	size_t		i;

	i = 0;
	while (i < elem->nb_elem)
	{
		elem->elem_n = i;
		map = ft_pos_elem(map, elem, 0, 0);
		while (map->ispos == 0)
		{
			if (i-- > 0)
			{
				elem->elem_n = i;
				map = ft_delete_on_map(map, i);
				map = ft_pos_elem(map, elem, map->x, map->y);
			}
			else
			{
				map = ft_resize_map(map, map->size_map + 1);
				i = -1;
				break ;
			}
		}
		i++;
	}
	return (map);
}
