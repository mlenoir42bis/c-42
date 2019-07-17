/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 18:07:23 by mlenoir           #+#    #+#             */
/*   Updated: 2016/06/07 19:13:03 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "get_next_line.h"
#include <stdio.h>

void			ft_treat_file(int argc, char *argv[])
{
	int			ret;
	int			i;
	int			fd;
	char		*str;
	int			ct;
	int			errors;

	errors = 0;
	ct = 0;
	ret = 42;
	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
		{
			ft_putstr("map Error open\n");
			i++;
			continue;
		}
		str = 0;
		while ((ret = get_next_line(fd, &str)) > 0)
		{
			printf("ret : %d\nlgn : %s\n",ret, str);
			free(str);
		}
		printf("--end--\nret : %d\nlgn : %s\n",ret, str);
		free(str);
		if (close(fd) == -1)
			ft_putstr("map Error\n");
		i++;
	}
}

char			*ft_strnewcpy(char *str)
{
	char		*ret;
	int			i;

	if (!(ret = ft_strnew(ft_strlen(str) + 1)))
		return (0);
	i = 0;
	while (str[i])
	{
		ret[i] = str[i];
		i++;
	}
	return (ret);
}

int				main(int argc, char *argv[])
{
	ft_treat_file(argc, argv);
	char		*line;
	int			fd1;
	int			fd2;
	int			fd3;
	int			ret;

	if (argc && argv)
		;
	
	line = 0;
	fd1 = open("./test/gnl1_1.txt", O_RDONLY);
	fd2 = open("./test/gnl1_2.txt", O_RDONLY);
	fd3 = open("./test/test1", O_RDONLY);

	ret = get_next_line(fd1, &line);
	printf("--fd1--\nret : %d\nline : %s\n", ret, line);
	free(line);
	ret = get_next_line(fd2, &line);
	printf("--fd2--\nret : %d\nline : %s\n", ret, line);
	free(line);
	ret = get_next_line(fd3, &line);
	printf("--fd3--\nret : %d\nline : %s\n", ret, line);
	return (0);
}
