/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 20:01:41 by mlenoir           #+#    #+#             */
/*   Updated: 2016/02/20 05:48:54 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char					*ft_cpytmp(char *new, char *tmp, int j)
{
	int					i;

	i = 0;
	while (tmp[j] != '\0')
	{
		new[i] = tmp[j];
		i++;
		j++;
	}
	new[i] = '\0';
	return (new);
}

char					*ft_realloc_tmp_gnl(char *tmp)
{
	char				*new;
	int					i;
	int					j;

	i = 0;
	while (tmp[i] != '\n' && tmp[i])
		i++;
	if (tmp[i] == '\n')
		i++;
	j = i;
	while (tmp[i])
		i++;
	new = (char *)malloc(sizeof(char) * (i - j) + 1);
	if (new)
		new = ft_cpytmp(new, tmp, j);
	free(tmp);
	return (new);
}

char					*ft_realloc_buf_gnl(char *tmp, char *buf)
{
	char				*new;
	int					i;
	int					j;

	new = (char *)malloc(sizeof(char) * (ft_strlen(tmp) + ft_strlen(buf) + 1));
	if (!new)
		return (0);
	i = 0;
	j = 0;
	while (tmp[i])
	{
		new[i] = tmp[i];
		i++;
	}
	j = 0;
	while (buf[j])
	{
		new[i] = buf[j];
		i++;
		j++;
	}
	new[i] = '\0';
	free(tmp);
	return (new);
}

int						get_next_line(int const fd, char **line)
{
	static char			*tmp[FD_MAX];
	char				buf[BUFF_SIZE + 1];
	int					ret;

	if (fd >= FD_MAX || fd < 0 || !line || BUFF_SIZE <= 0)
		return (-1);
	if (!tmp[fd])
		if (!(tmp[fd] = (char *)malloc(sizeof(char) * 1)))
			return (-1);
	ret = 42;
	while (!ft_strchr(tmp[fd], '\n') && (ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		tmp[fd] = ft_realloc_buf_gnl(tmp[fd], buf);
	}
	if (ret < 0)
		return (-1);
	*line = ft_get_line(tmp[fd]);
	tmp[fd] = ft_realloc_tmp_gnl(tmp[fd]);
	if (tmp[fd][0] == 0 && ret == 0 && *line[0] == 0)
		return (0);
	return (1);
}
