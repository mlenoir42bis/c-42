/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdblpopone.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/20 18:11:01 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/10 00:50:45 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../select.h"

void				ft_lstdblpopone(t_lstdbl_in *in, t_lstdbl *del)
{
	t_lstdbl		*lst_n;
	t_lstdbl		*lst_p;

	if (in->first && del)
	{
		lst_n = del->next;
		lst_p = del->prev;
		if (lst_p != NULL)
			lst_p->next = lst_n;
		if (lst_n != NULL)
			lst_n->prev = lst_p;
		if (lst_p == NULL)
			in->first = lst_n;
		del->next = NULL;
		del->prev = NULL;
	}
}
