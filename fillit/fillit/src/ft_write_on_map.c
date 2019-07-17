/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_on_map.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 17:01:22 by mlenoir           #+#    #+#             */
/*   Updated: 2016/01/08 18:42:53 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft/libft.h"
#include "../includes/fillit.h"

t_map			*ft_write_on_map(t_map *map, t_elem *elem)
{
	size_t		mapx;
	size_t		mapy;
	int			i;

	map->map[map->x][map->y] = ft_alpha_map(elem->elem_n);
	i = 1;
	while (i < 4)
	{
		mapx = map->x + elem->pos[elem->elem_n][i][0];
		mapy = map->y + elem->pos[elem->elem_n][i][1];
		map->map[mapx][mapy] = ft_alpha_map(elem->elem_n);
		i++;
	}
	map->ispos = 1;
	return (map);
}
