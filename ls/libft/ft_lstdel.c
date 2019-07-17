/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:37:00 by mlenoir           #+#    #+#             */
/*   Updated: 2015/11/30 16:47:42 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*lst;

	lst = *alst;
	if (lst)
	{
		while (lst)
		{
			tmp = lst->next;
			ft_lstdelone(&lst, del);
			lst = tmp;
		}
	}
	*alst = NULL;
}
