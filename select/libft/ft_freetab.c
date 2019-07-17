/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freetab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:33:21 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/06 16:32:21 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		**ft_freentab(char **tab, int i)
{
	if (tab && i > 0)
	{
		while (i >= 0)
		{
			free(tab[i]);
			i--;
		}
		free(tab);
		tab = NULL;
	}
	return (tab);
}

char		**ft_freetab(char **tab)
{
	int		i;

	i = -1;
	if (tab)
	{
		while (tab[++i])
			free(tab[i]);
		free(tab);
		tab = NULL;
	}
	return (tab);
}
