/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 17:18:48 by mlenoir           #+#    #+#             */
/*   Updated: 2016/01/08 17:57:33 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/libft/libft.h"
#include "../../includes/fillit.h"

t_map		*ft_free_map(t_map *map)
{
	size_t	i;

	i = 0;
	while (i < map->size_map)
	{
		free(map->map[i]);
		i++;
	}
	return (map);
}
