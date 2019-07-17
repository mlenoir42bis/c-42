/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdblsort_desc.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/12 05:38:59 by mlenoir           #+#    #+#             */
/*   Updated: 2016/04/20 18:26:49 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../ft_ls.h"

static t_lstdbl		*ft_bclsort(t_lstdbl *tmp, t_lstdbl *max)
{
	while (tmp)
	{
		if (ft_strcmp(max->content, tmp->content) >= 0)
			max = tmp;
		tmp = tmp->next;
	}
	return (max);
}

t_lstdbl_in			ft_lstdblsort_desc(t_lstdbl_in *in)
{
	t_lstdbl		*tmp;
	t_lstdbl		*max;
	t_lstdbl_in		desc;
	int				size;

	size = ft_lstdblsize(&in->first) + 1;
	ft_lstdblinit(&desc);
	while (--size > 0)
	{
		tmp = in->first;
		max = tmp;
		max = ft_bclsort(tmp, max);
		ft_lstdblpopone(in, max);
		max->prev = desc.last;
		if (desc.last)
			desc.last->next = max;
		else
			desc.first = max;
		desc.last = max;
	}
	return (desc);
}
