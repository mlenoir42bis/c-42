/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tchek_elem_on_pos.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 17:02:35 by mlenoir           #+#    #+#             */
/*   Updated: 2016/01/08 18:53:34 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft/libft.h"
#include "../includes/fillit.h"

static int			tchek_pos_leng_map(size_t posx, size_t posy, t_map *map)
{
	size_t			null;

	null = 0;
	if ((map->x + posx) >= map->size_map)
		return (0);
	if ((map->x + posx) < null)
		return (0);
	if ((map->y + posy) >= map->size_map)
		return (0);
	if ((map->y + posy) < null)
		return (0);
	return (1);
}

static int			ft_tchek_all_pos_leng(t_map *map, t_elem *elem)
{
	int				i;
	size_t			x;
	size_t			y;

	i = 1;
	while (i < 4)
	{
		x = elem->pos[elem->elem_n][i][0];
		y = elem->pos[elem->elem_n][i][1];
		if (!tchek_pos_leng_map(x, y, map))
			return (0);
		i++;
	}
	return (1);
}

static int			tchek_pos_on_map(size_t posx, size_t posy, t_map *map)
{
	size_t			i;
	size_t			j;

	i = map->x + posx;
	j = map->y + posy;
	if (map->map[i][j] != '.')
		return (0);
	return (1);
}

static int			ft_tchek_all_pos_null(t_map *map, t_elem *elem)
{
	int				i;
	size_t			x;
	size_t			y;

	i = 1;
	while (i < 4)
	{
		x = elem->pos[elem->elem_n][i][0];
		y = elem->pos[elem->elem_n][i][1];
		if (!tchek_pos_on_map(x, y, map))
			return (0);
		i++;
	}
	return (1);
}

int					ft_tchek_elem_on_pos(t_map *map, t_elem *elem)
{
	if (!(ft_tchek_all_pos_leng(map, elem)))
		return (0);
	if (!(ft_tchek_all_pos_null(map, elem)))
		return (0);
	return (1);
}
