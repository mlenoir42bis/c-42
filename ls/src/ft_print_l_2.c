/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_l_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/20 12:09:49 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/03 18:43:00 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../ft_ls.h"

void				ft_print_pass(t_lstdbl *elem, t_ls_size *size)
{
	ft_printf(" %s", elem->ps->pw_name);
	ft_putcharn(' ', size->size_use - ft_strlen(elem->ps->pw_name));
	ft_printf("  %s", elem->gr->gr_name);
	ft_putcharn(' ', size->size_grp - ft_strlen(elem->gr->gr_name));
}

void				ft_print_size(t_lstdbl *elem, t_ls_size *size)
{
	if (!(S_ISBLK(elem->st.st_mode)) && !(S_ISCHR(elem->st.st_mode)))
	{
		if (size->spepres)
		{
			ft_putcharn(' ', size->major + 1 + size->minor + 1 +
					size->size_size - ft_intlen(elem->st.st_size, 0));
		}
		else
			ft_putcharn(' ', size->size_size - ft_intlen(elem->st.st_size, 0));
		ft_printf("  %d", elem->st.st_size);
	}
	else
	{
		ft_putcharn(' ', size->major - ft_intlen(major(elem->st.st_rdev), 0)
				+ 1);
		ft_printf("  %d,", major(elem->st.st_rdev));
		ft_putcharn(' ', size->minor - ft_intlen(minor(elem->st.st_rdev), 0));
		ft_printf(" %d", minor(elem->st.st_rdev));
	}
}

static void			ft_print_date_mtime(char **date)
{
	ft_printf(" %s ", date[1]);
	if (ft_strlen(date[2]) != 2)
		ft_printf(" %s  ", date[2]);
	else
		ft_printf("%s  ", date[2]);
	ft_putstrn(date[4], 4);
}

void				ft_print_date(struct stat st)
{
	char			**date;
	int				six_month;

	six_month = ((365 / 2) * 60 * 60 * 24);
	if ((time(0) - st.st_mtime) > six_month || st.st_mtime > time(0))
	{
		date = ft_strsplit(ctime(&st.st_mtime), ' ');
		ft_print_date_mtime(date);
	}
	else
	{
		date = ft_strsplit(ctime(&st.st_ctime), ' ');
		ft_printf(" %s ", date[1]);
		if (ft_strlen(date[2]) != 2)
			ft_printf(" %s ", date[2]);
		else
			ft_printf("%s ", date[2]);
		ft_putstrn(date[3], 5);
	}
	ft_freetab(date, 5);
}
