/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc_strchr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 02:28:40 by mlenoir           #+#    #+#             */
/*   Updated: 2016/01/08 16:57:54 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft/libft.h"
#include "../includes/fillit.h"

char			*ft_realloc_strchr(char *tmp, char c)
{
	char		*new;
	int			i;
	int			j;

	i = 0;
	while (tmp[i] != c && tmp[i])
		i++;
	if (tmp[i] == c)
		i++;
	j = i;
	while (tmp[i])
		i++;
	if (!(new = (char *)malloc(sizeof(char) * (i - j + 1))))
		return (0);
	i = 0;
	while (tmp[j] != '\0')
	{
		new[i] = tmp[j];
		i++;
		j++;
	}
	new[i] = '\0';
	free(tmp);
	return (new);
}
