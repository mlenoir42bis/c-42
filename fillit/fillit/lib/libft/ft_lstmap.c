/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:37:58 by mlenoir           #+#    #+#             */
/*   Updated: 2015/11/30 19:46:04 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*result;
	t_list	*tmp;
	t_list	*tmp2;

	tmp2 = f(lst);
	if ((result = ft_lstnew(tmp2->content, tmp2->content_size)))
	{
		tmp = result;
		lst = lst->next;
		while (lst)
		{
			tmp2 = f(lst);
			if (!(tmp->next = ft_lstnew(tmp2->content, tmp2->content_size)))
				return (0);
			tmp = tmp->next;
			lst = lst->next;
		}
	}
	return (result);
}
