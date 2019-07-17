/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdblprint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 22:30:36 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/10 00:50:58 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../select.h"

void			ft_lstdblprint(t_lstdbl *lst)
{
	t_lstdbl	*tmp;

	tmp = lst;
	while (tmp)
	{
		ft_putendl(tmp->content);
		tmp = tmp->next;
	}
}
