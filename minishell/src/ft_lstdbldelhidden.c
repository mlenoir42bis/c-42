/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdbldelhidden.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 15:53:17 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/24 01:21:37 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../minishell.h"

void				ft_lstdbldelhidden(t_lstdbl_in *in)
{
	t_lstdbl		*first;
	t_lstdbl		*first_n;
	char			*tmpc;
	int				size;

	size = ft_lstdblsize(&in->first);
	first = in->first;
	while (size > 0)
	{
		first_n = first->next;
		tmpc = first->content;
		if (tmpc[0] == '.')
			ft_lstdbldelone(in, first);
		size -= 1;
		first = first_n;
	}
}
