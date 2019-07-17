/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdbldelone.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/12 05:17:59 by mlenoir           #+#    #+#             */
/*   Updated: 2016/03/17 06:33:47 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../ft_ls.h"

void				ft_lstdbldelone(t_lstdbl_in *in, t_lstdbl *del)
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
		free(del->content);
		del->content = NULL;
		free(del);
		del = NULL;
		if (lst_p == NULL)
			in->first = lst_n;
	}
}
