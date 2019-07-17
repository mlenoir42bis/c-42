/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 00:27:02 by mlenoir           #+#    #+#             */
/*   Updated: 2016/01/08 17:54:15 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft/libft.h"
#include "../includes/fillit.h"

t_elem		*ft_treat_file(char *argv[])
{
	int		fd;
	t_elem	*elem;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_printf("error\n");
		return (0);
	}
	elem = ft_read_file(fd);
	if (!elem)
	{
		ft_printf("error\n");
		return (elem);
	}
	if (close(fd) == -1)
	{
		ft_printf("error\n");
		return (0);
	}
	return (elem);
}
