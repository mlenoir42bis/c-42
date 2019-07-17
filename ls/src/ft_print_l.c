/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_l.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/20 12:09:59 by mlenoir           #+#    #+#             */
/*   Updated: 2016/04/29 12:21:57 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../ft_ls.h"

int					ft_print_toto(t_lstdbl_in in)
{
	t_lstdbl		*tmp;
	int				toto;

	toto = 0;
	tmp = in.first;
	if (tmp)
	{
		while (tmp)
		{
			toto += tmp->st.st_blocks;
			tmp = tmp->next;
		}
		ft_printf("total ");
		ft_putnbr(toto);
		ft_putchar('\n');
	}
	return (1);
}

void				ft_switch_print_l(t_lstdbl *elem, t_ls_size *size)
{
	char			my_buf[75];
	int				len;

	ft_print_permission(elem->st);
	ft_putcharn(' ', size->size_nlink - ft_intlen(elem->st.st_nlink, 0));
	ft_printf("  %d", elem->st.st_nlink);
	ft_print_pass(elem, size);
	ft_print_size(elem, size);
	ft_print_date(elem->st);
	ft_printf(" %s", elem->content);
	if (S_ISLNK(elem->st.st_mode))
	{
		len = readlink(elem->path, my_buf, 73);
		my_buf[len] = '\0';
		ft_printf(" -> %s", my_buf);
	}
	ft_putchar('\n');
}

int					ft_print_l(t_lstdbl_in in)
{
	t_lstdbl		*first;
	t_ls_size		*size;

	first = in.first;
	if (!(size = ft_init_size(in)))
		return (0);
	ft_print_toto(in);
	while (first)
	{
		ft_switch_print_l(first, size);
		first = first->next;
	}
	free(size);
	return (1);
}
