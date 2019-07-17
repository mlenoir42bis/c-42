/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 03:58:27 by mlenoir           #+#    #+#             */
/*   Updated: 2016/01/08 18:11:42 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/libft/libft.h"
#include "../../includes/fillit.h"

static int	ft_isvalid_char(char *buf)
{
	int i;

	i = 0;
	while (buf[i])
	{
		if (buf[i] != '.' && buf[i] != '#' && buf[i] != '\n')
			return (0);
		i++;
	}
	return (1);
}

static int	ft_isvalid_buf(char *buf)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	while (k++ < 4)
	{
		j = 0;
		while (buf[j] == '.' || buf[j] == '#')
			j++;
		if ((j != 4) || (buf[j + i] != '\n'))
			return (0);
		i += j + 1;
	}
	return (1);
}

int			check_buf(char *buf, int ret)
{
	if (ret != 20 && ret != 21)
		return (0);
	if (!ft_isvalid_char(buf))
		return (0);
	if (!ft_isvalid_buf(buf))
		return (0);
	return (1);
}
