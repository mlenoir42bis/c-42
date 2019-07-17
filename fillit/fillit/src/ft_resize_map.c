/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resize_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 16:58:20 by mlenoir           #+#    #+#             */
/*   Updated: 2016/01/08 17:51:04 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft/libft.h"
#include "../includes/fillit.h"

t_map		*ft_resize_map(t_map *map, size_t n)
{
	char	**new;
	size_t	i;
	size_t	j;

	if (!(new = ft_create_map(n)))
		return (ft_free_map(map));
	i = 0;
	while (i < map->size_map)
	{
		j = 0;
		while (j < map->size_map)
		{
			new[i][j] = map->map[i][j];
			j++;
		}
		i++;
	}
	ft_free_map(map);
	map->size_map = n;
	map->map = new;
	return (map);
}
