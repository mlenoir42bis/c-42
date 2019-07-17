/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tchek_listen.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/25 13:51:20 by mlenoir           #+#    #+#             */
/*   Updated: 2016/02/28 14:13:03 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../p4.h"

int			ft_isdigit_str(char *s)
{
	int		i;

	i = -1;
	while (s[++i])
	{
		if (!ft_isdigit(s[i]))
			return (0);
	}
	return (1);
}

int			ft_tchek_arg(char *lgn, char *col)
{
	if (!ft_isdigit_str(lgn) && !ft_isdigit_str(col))
		return (0);
	if ((lgn[0] < '6' && lgn[1] == '\0') || (col[0] < '7' && col[1] == '\0'))
		return (0);
	return (1);
}

int			ft_tchek_data_menu(t_p4 *p4)
{
	if (p4->mode != 1 && p4->mode != 2 && p4->mode != 3)
		return (0);
	return (1);
}

int			ft_tchek_data_col(t_p4 *p4)
{
	if (p4->col < 1 || p4->col > p4->mx_col)
		return (0);
	return (1);
}

int			ft_tchek_valid_shot(t_p4 *p4)
{
	if (p4->tab[0][p4->col - 1] != 0)
		return (0);
	return (1);
}
