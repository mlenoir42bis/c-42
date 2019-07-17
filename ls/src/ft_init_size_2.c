/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_size_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/20 12:15:48 by mlenoir           #+#    #+#             */
/*   Updated: 2016/04/29 12:19:00 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../ft_ls.h"

int					ft_init_size_grp(t_lstdbl_in lst)
{
	t_lstdbl		*tmp;
	int				max;

	max = 0;
	tmp = lst.first;
	while (tmp)
	{
		if (max < (int)ft_strlen(tmp->gr->gr_name))
			max = (int)ft_strlen(tmp->gr->gr_name);
		tmp = tmp->next;
	}
	return (max);
}

int					ft_init_size_use(t_lstdbl_in lst)
{
	t_lstdbl		*tmp;
	int				max;

	max = 0;
	tmp = lst.first;
	while (tmp)
	{
		if (max < (int)ft_strlen(tmp->ps->pw_name))
			max = (int)ft_strlen(tmp->ps->pw_name);
		tmp = tmp->next;
	}
	return (max);
}

int					ft_is_spefile(t_lstdbl_in lst)
{
	t_lstdbl		*tmp;

	tmp = lst.first;
	while (tmp)
	{
		if ((S_ISBLK(tmp->st.st_mode)) || (S_ISCHR(tmp->st.st_mode)))
			return (1);
		tmp = tmp->next;
	}
	return (0);
}
