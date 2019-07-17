/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:38:44 by mlenoir           #+#    #+#             */
/*   Updated: 2015/11/30 16:49:31 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int			ft_lstsize(t_list **root)
{
	int		i;
	t_list	*tmp;

	tmp = *root;
	i = 1;
	if (*root != NULL)
	{
		while (tmp->next != NULL)
		{
			i++;
			tmp = tmp->next;
		}
		return (i);
	}
	return (0);
}
