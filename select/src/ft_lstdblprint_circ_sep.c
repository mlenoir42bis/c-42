/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdblprint_circ_sep.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 22:36:13 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/23 22:51:01 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../select.h"

void				ft_lstdblprint_circ_sep(t_lstdbl_in in, char c)
{
	t_lstdbl		*tmp;
	int				i;

	i = -1;
	tmp = in.first;
	while (++i < in.len)
	{
		if (tmp->select)
		{
			ft_putstr(tmp->content);
			ft_putchar(c);
		}
		tmp = tmp->next;
	}
}
