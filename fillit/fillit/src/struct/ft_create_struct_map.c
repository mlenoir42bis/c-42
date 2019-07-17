/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_struct_map.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 17:17:21 by mlenoir           #+#    #+#             */
/*   Updated: 2016/01/08 18:05:23 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/libft/libft.h"
#include "../../includes/fillit.h"

static char	*create_line(size_t n)
{
	char	*lgn;

	if (!(lgn = ft_strnew(n)))
		return (0);
	ft_memset(lgn, '.', n);
	return (lgn);
}

char		**ft_create_map(size_t n)
{
	char	**map;
	size_t	i;

	if (!(map = (char **)malloc(sizeof(char *) * n)))
		return (0);
	i = 0;
	while (i < n)
	{
		if (!(map[i] = create_line(n)))
			return (0);
		i++;
	}
	return (map);
}

t_map		*ft_create_struct_map(size_t n)
{
	t_map	*map;

	map = NULL;
	if (!(map = malloc(sizeof(t_map))))
		return (0);
	if (!(map->map = ft_create_map(n)))
		return (0);
	map->size_map = n;
	map->x = 0;
	map->y = 0;
	map->ispos = 0;
	return (map);
}
