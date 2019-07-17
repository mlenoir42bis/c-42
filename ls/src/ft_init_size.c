/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 19:56:32 by mlenoir           #+#    #+#             */
/*   Updated: 2016/04/29 12:19:09 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../ft_ls.h"

int					ft_init_size_major(t_lstdbl_in lst)
{
	t_lstdbl		*tmp;
	int				max;

	max = 0;
	tmp = lst.first;
	while (tmp)
	{
		if (max < ft_intlen(major(tmp->st.st_rdev), 0))
			max = ft_intlen(major(tmp->st.st_rdev), 0);
		tmp = tmp->next;
	}
	return (max);
}

int					ft_init_size_minor(t_lstdbl_in lst)
{
	t_lstdbl		*tmp;
	int				max;

	max = 0;
	tmp = lst.first;
	while (tmp)
	{
		if (max < ft_intlen(minor(tmp->st.st_rdev), 0))
			max = ft_intlen(minor(tmp->st.st_rdev), 0);
		tmp = tmp->next;
	}
	return (max);
}

int					ft_init_size_nlink(t_lstdbl_in lst)
{
	t_lstdbl		*tmp;
	int				max;

	max = 0;
	tmp = lst.first;
	while (tmp)
	{
		if (max < ft_intlen(tmp->st.st_nlink, 0))
			max = ft_intlen(tmp->st.st_nlink, 0);
		tmp = tmp->next;
	}
	return (max);
}

int					ft_init_size_size(t_lstdbl_in lst)
{
	t_lstdbl		*tmp;
	int				max;

	max = 0;
	tmp = lst.first;
	while (tmp)
	{
		if (max < ft_intlen(tmp->st.st_size, 0))
			max = ft_intlen(tmp->st.st_size, 0);
		tmp = tmp->next;
	}
	return (max);
}

t_ls_size			*ft_init_size(t_lstdbl_in lst)
{
	t_ls_size		*s_size;

	if (!(s_size = (t_ls_size *)malloc(sizeof(t_ls_size))))
		return (0);
	s_size->size_nlink = ft_init_size_nlink(lst);
	s_size->size_size = ft_init_size_size(lst);
	s_size->size_use = ft_init_size_use(lst);
	s_size->size_grp = ft_init_size_grp(lst);
	s_size->minor = ft_init_size_minor(lst);
	s_size->major = ft_init_size_major(lst);
	s_size->spepres = ft_is_spefile(lst);
	return (s_size);
}
