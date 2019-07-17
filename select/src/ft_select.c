/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 22:37:23 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/23 22:51:18 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../select.h"

int					ft_select(char *buf, t_lstdbl_in in)
{
	t_lstdbl		*tmp;
	int				i;

	i = -1;
	tmp = in.first;
	if (T_SPA)
	{
		while (++i < in.len)
		{
			if (tmp->live)
			{
				if (tmp->select)
					tmp->select = 0;
				else
					tmp->select = 1;
				tmp->live = 0;
				tmp->next->live = 1;
				return (1);
			}
			tmp = tmp->next;
		}
	}
	return (0);
}
