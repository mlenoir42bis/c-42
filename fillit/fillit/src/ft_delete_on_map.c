/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_on_map.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 16:56:53 by mlenoir           #+#    #+#             */
/*   Updated: 2016/01/08 18:42:38 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft/libft.h"
#include "../includes/fillit.h"

t_map			*ft_delete_on_map(t_map *map, size_t n)
{
	size_t		j;
	size_t		i;
	int			first;

	i = 0;
	first = 0;
	while (i < map->size_map)
	{
		j = 0;
		while (j < map->size_map)
		{
			if (map->map[i][j] == (char)('A' + n))
			{
				if (!first++)
					ft_update_x_y(map, i, j + 1);
				map->map[i][j] = '.';
			}
			++j;
		}
		++i;
	}
	return (map);
}
