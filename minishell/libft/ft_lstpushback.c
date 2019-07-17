/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:39:09 by mlenoir           #+#    #+#             */
/*   Updated: 2016/03/12 04:46:04 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_lstpushback(t_list **root,
		void const *content)
{
	t_list	*news_elem;
	t_list	*tmp;

	tmp = *root;
	news_elem = ft_lstnew(content, ft_strlen(content) + 1);
	if (*root != NULL)
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = news_elem;
	}
	else
		*root = news_elem;
}
