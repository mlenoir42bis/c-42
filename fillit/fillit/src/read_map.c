/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 17:10:21 by mlenoir           #+#    #+#             */
/*   Updated: 2016/01/08 17:55:06 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft/libft.h"
#include "../includes/fillit.h"

int			ft_display_map(char **map, int n)
{
	int		i;
	int		j;

	if (!map || !n)
		return (0);
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			ft_putchar(map[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}

void		ft_read_nelem(char ***map, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < 4)
		{
			k = 0;
			while (k < 4)
			{
				ft_putchar(map[i][j][k]);
				k++;
			}
			ft_putchar('\n');
			j++;
		}
		i++;
	}
}
