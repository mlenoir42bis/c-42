/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_buf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 02:13:07 by mlenoir           #+#    #+#             */
/*   Updated: 2016/01/08 18:15:49 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft/libft.h"
#include "../includes/fillit.h"

t_elem		*ft_treat_buf(char *buf, t_elem *elem)
{
	char	*tmp;
	int		i;
	int		j;

	i = 0;
	if (!(tmp = ft_strdup(buf)))
		return (0);
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			elem->tab[elem->nb_elem][i][j] = tmp[j];
			j++;
		}
		if (!(tmp = ft_realloc_strchr(tmp, '\n')))
		{
			elem = ft_free_elem(elem);
			return (elem);
		}
		i++;
	}
	free(tmp);
	return (elem);
}
