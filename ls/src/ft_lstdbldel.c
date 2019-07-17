/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdbldel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/12 05:18:44 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/03 15:07:53 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../ft_ls.h"

void				ft_lstdbldel(t_lstdbl_in *lst)
{
	t_lstdbl		*tmp;
	t_lstdbl		*tmp_n;

	tmp = lst->first;
	while (tmp)
	{
		tmp_n = tmp->next;
		free(tmp->content);
		tmp->content = NULL;
		if (tmp->path)
			free(tmp->path);
		tmp->path = NULL;
		free(tmp);
		tmp = NULL;
		tmp = tmp_n;
	}
	lst->first = NULL;
	lst->last = NULL;
}
