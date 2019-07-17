/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/24 23:00:07 by mlenoir           #+#    #+#             */
/*   Updated: 2016/02/28 22:55:01 by pbenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../p4.h"

void			ft_free_tab2d(char **tab, int i)
{
	i += 1;
	while (--i >= 0)
		free(tab[i]);
	free(tab);
}

char			**ft_init_tab(int lgn, int col)
{
	int			i;
	char		**tab;

	if (!(tab = (char **)malloc(sizeof(char *) * lgn + 1)))
		return (0);
	i = -1;
	while (++i < lgn)
	{
		if (!(tab[i] = (char *)malloc(sizeof(char) * col + 1)))
		{
			ft_free_tab2d(tab, --i);
			return (0);
		}
		ft_memset(tab[i], 0, col);
		tab[i][col] = '\0';
	}
	tab[lgn] = NULL;
	return (tab);
}

t_p4			*ft_init(char *lgn, char *col)
{
	t_p4		*p4;

	srand(time(NULL));
	if (!(p4 = (t_p4 *)malloc(sizeof(t_p4))))
		return (0);
	p4->mx_lgn = ft_atoi(lgn);
	p4->mx_col = ft_atoi(col);
	if (!(p4->tab = ft_init_tab(p4->mx_lgn, p4->mx_col)))
		return (0);
	p4->col = 0;
	p4->lgn = 0;
	p4->score = 0;
	p4->must_score = 0;
	p4->must_shot = 0;
	p4->win = 0;
	p4->end = 0;
	while (p4->player != 1 && p4->player != 2)
		p4->player = (rand() % 3);
	return (p4);
}
