/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/23 10:29:44 by mlenoir           #+#    #+#             */
/*   Updated: 2015/09/24 03:26:16 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

void		ft_read_data_file(int fd)
{
	int		ret;
	char	buf;
	t_list	*list;
	int		tp;
	
	tp = 0;
	list = NULL;
	while ((ret = read(fd, &buf, 1)))
	{
		ft_list_push_back(&list, buf);
	}
	if (list)
		ft_treat_data_list(list);
	else
		ft_putstr("map Error");
}

void		ft_treat_file(int argc, char *argv[])
{
	int i;
	int fd;

	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
		{
			ft_putstr("map Error\n");
			i++;
			continue;
		}
		ft_read_data_file(fd);
		if(close(fd) == -1)
			ft_putstr("map Error\n");
		i++;
	}
}
