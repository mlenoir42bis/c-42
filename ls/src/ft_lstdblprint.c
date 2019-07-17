/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdblprint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 22:30:36 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/22 03:47:56 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../ft_ls.h"

void			ft_lstdblprint(t_lstdbl *lst)
{
	t_lstdbl	*tmp;

	tmp = lst;
	while (tmp)
	{
		ft_printf("content -> %s\n", tmp->content);
		tmp = tmp->next;
	}
}

void			ft_lstdblprint_rev(t_lstdbl *lst)
{
	t_lstdbl	*tmp;

	tmp = lst;
	while (tmp)
	{
		ft_printf("content -> %s\n", tmp->content);
		tmp = tmp->prev;
	}
}
