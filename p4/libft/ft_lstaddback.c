/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:36:40 by mlenoir           #+#    #+#             */
/*   Updated: 2015/11/30 16:48:17 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_lstaddback(t_list **alst, t_list *new)
{
	t_list	*lst;

	lst = *alst;
	if (*alst != NULL && new != NULL)
	{
		while (lst->next != NULL)
			lst = lst->next;
		lst->next = new;
	}
	else if (*alst == NULL && new != NULL)
		*alst = new;
}
