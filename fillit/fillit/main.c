/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 14:26:41 by mlenoir           #+#    #+#             */
/*   Updated: 2016/01/11 15:39:45 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/libft/libft.h"
#include "includes/fillit.h"

static int	ft_size_map(size_t n)
{
	size_t	r;

	r = 2;
	while ((r * r) < n)
		r++;
	return (r);
}

int			main(int argc, char **argv)
{
	t_elem	*elem;
	t_map	*map;

	if (argc == 2)
	{
		if (!(elem = ft_treat_file(argv)))
			return (0);
		if (!(check_elem(elem)))
			return (ft_error(elem, "error\n"));
		if (!(map = ft_create_struct_map(ft_size_map(elem->nb_elem))))
			return (0);
		elem = ft_treat_elem(elem);
		map = ft_resolv(elem, map);
		ft_display_map(map->map, map->size_map);
		ft_free_map(map);
		free(map);
		elem = ft_free_elem(elem);
	}
	else
		ft_printf("error\n");
	return (0);
}
