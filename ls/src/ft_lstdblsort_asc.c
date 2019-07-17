/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdblsort_asc.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/12 05:35:15 by mlenoir           #+#    #+#             */
/*   Updated: 2016/04/20 18:31:30 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../ft_ls.h"

static t_lstdbl			*ft_bclsort(t_lstdbl *tmp, t_lstdbl *min)
{
	while (tmp)
	{
		if (ft_strcmp(tmp->content, min->content) >= 0)
			min = tmp;
		tmp = tmp->next;
	}
	return (min);
}

t_lstdbl_in				ft_lstdblsort_asc(t_lstdbl_in *in)
{
	t_lstdbl			*tmp;
	t_lstdbl			*min;
	t_lstdbl_in			asc;
	int					size;

	size = ft_lstdblsize(&in->first) + 1;
	ft_lstdblinit(&asc);
	while (--size > 0)
	{
		tmp = in->first;
		min = tmp;
		min = ft_bclsort(tmp, min);
		ft_lstdblpopone(in, min);
		min->prev = asc.last;
		if (asc.last)
			asc.last->next = min;
		else
			asc.first = min;
		asc.last = min;
	}
	return (asc);
}
