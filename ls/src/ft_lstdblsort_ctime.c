/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdblsort_ctime.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/13 04:25:19 by mlenoir           #+#    #+#             */
/*   Updated: 2016/04/29 12:25:32 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../ft_ls.h"

static t_lstdbl		*ft_bclsort(t_lstdbl *tmp, t_lstdbl *last)
{
	while (tmp)
	{
		if (tmp->st.st_mtimespec.tv_sec > last->st.st_mtimespec.tv_sec ||
				(tmp->st.st_mtimespec.tv_sec == last->st.st_mtimespec.tv_sec &&
				tmp->st.st_mtimespec.tv_nsec > last->st.st_mtimespec.tv_nsec))
			last = tmp;
		tmp = tmp->next;
	}
	return (last);
}

t_lstdbl_in			ft_lstdblsort_ctime(t_lstdbl_in *in)
{
	t_lstdbl		*tmp;
	t_lstdbl		*last;
	t_lstdbl_in		new;
	int				size;

	size = ft_lstdblsize(&in->first) + 1;
	ft_lstdblinit(&new);
	while (--size > 0)
	{
		tmp = in->first;
		last = tmp;
		last = ft_bclsort(tmp, last);
		ft_lstdblpopone(in, last);
		last->prev = new.last;
		if (new.last)
			new.last->next = last;
		else
			new.first = last;
		new.last = last;
	}
	return (new);
}

static t_lstdbl		*ft_bclsort_reverse(t_lstdbl *tmp, t_lstdbl *last)
{
	while (tmp)
	{
		if (tmp->st.st_mtimespec.tv_sec < last->st.st_mtimespec.tv_sec ||
				(tmp->st.st_mtimespec.tv_sec == last->st.st_mtimespec.tv_sec &&
				tmp->st.st_mtimespec.tv_nsec < last->st.st_mtimespec.tv_nsec))
			last = tmp;
		tmp = tmp->next;
	}
	return (last);
}

t_lstdbl_in			ft_lstdblsort_ctime_reverse(t_lstdbl_in *in)
{
	t_lstdbl		*tmp;
	t_lstdbl		*last;
	t_lstdbl_in		new;
	int				size;

	size = ft_lstdblsize(&in->first) + 1;
	ft_lstdblinit(&new);
	while (--size > 0)
	{
		tmp = in->first;
		last = tmp;
		last = ft_bclsort_reverse(tmp, last);
		ft_lstdblpopone(in, last);
		last->prev = new.last;
		if (new.last)
			new.last->next = last;
		else
			new.first = last;
		new.last = last;
	}
	return (new);
}
