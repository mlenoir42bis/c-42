/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdbldel_circ.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 20:14:44 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/11 20:16:30 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../select.h"

void				ft_lstdbldel_circ(t_lstdbl_in *lst)
{
	t_lstdbl		*tmp;
	t_lstdbl		*tmp_n;
	int				i;

	i = -1;
	tmp = lst->first;
	while (++i < lst->len)
	{
		tmp_n = tmp->next;
		free(tmp->content);
		tmp->content = NULL;
		free(tmp);
		tmp = NULL;
		tmp = tmp_n;
	}
	lst->first = NULL;
	lst->last = NULL;
	lst->len = 0;
}
