/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_cursor.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 22:34:49 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/23 23:13:48 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../select.h"

int					ft_get_cursor(t_lstdbl_in in)
{
	t_lstdbl		*tmp;
	int				i;

	i = -1;
	tmp = in.first;
	while (++i < in.len)
	{
		if (tmp->live)
		{
			g_term.cursor_x = tmp->x;
			g_term.cursor_y = tmp->y;
			return (1);
		}
		tmp = tmp->next;
	}
	return (0);
}
