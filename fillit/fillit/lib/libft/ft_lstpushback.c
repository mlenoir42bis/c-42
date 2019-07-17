/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:39:09 by mlenoir           #+#    #+#             */
/*   Updated: 2015/11/30 16:49:10 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstpushback(t_list **root,
		void const *content, size_t content_size)
{
	t_list	*news_elem;
	t_list	*tmp;

	tmp = *root;
	news_elem = ft_lstnew(content, content_size);
	if (*root != NULL)
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = news_elem;
	}
	else
		*root = news_elem;
}
