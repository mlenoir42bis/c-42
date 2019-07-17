/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_line.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 18:04:30 by mlenoir           #+#    #+#             */
/*   Updated: 2016/02/12 03:18:04 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_get_line(char *str)
{
	int		i;
	char	*line;

	i = 0;
	line = 0;
	while (str[i] != '\n' && str[i])
		i++;
	line = (char *)malloc(sizeof(char) * i + 1);
	if (!line)
		return (0);
	i = 0;
	if (str[i] != '\n')
	{
		while (str[i] != '\n' && str[i])
		{
			line[i] = str[i];
			i++;
		}
		line[i] = '\0';
	}
	else
		line[0] = 0;
	return (line);
}
