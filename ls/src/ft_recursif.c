/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursif.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 11:48:53 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/03 15:46:48 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/includes/libft.h"
#include "./ft_ls.h"

static int			ft_isdir(char *name)
{
	struct stat		sb;

	if (stat(name, &sb) < 0)
		return (0);
	if (((sb.st_mode & S_IFMT) == S_IFDIR))
		return (1);
	return (0);
}

int					ft_is_valid_recursif(t_lstdbl *tmp)
{
	char			my_buf[75];
	int				len;

	if (ft_isdir(tmp->path) &&
		ft_strcmp(".", tmp->content) &&
		ft_strcmp("..", tmp->content))
	{
		if (S_ISLNK(tmp->st.st_mode))
		{
			len = readlink(tmp->path, my_buf, 73);
			my_buf[len] = '\0';
			if (ft_strcmp(".", my_buf) && ft_strcmp("..", my_buf))
				return (1);
		}
		else
			return (1);
	}
	return (0);
}

int					ft_tchek_recursif(t_lstdbl_in in, t_ls_opt *opt)
{
	t_lstdbl		*tmp;

	tmp = in.first;
	while (tmp)
	{
		if (ft_is_valid_recursif(tmp))
			ft_recursif(opt, tmp->path);
		tmp = tmp->next;
	}
	return (1);
}

int					ft_recursif(t_ls_opt *opt, char *name)
{
	t_lstdbl_in		in;
	static int		s;

	if ((s += 1) != 1)
		ft_printf("\n%s:\n", name);
	ft_read_dir(&in, name);
	if (in.first)
		in = ft_display(in, opt);
	ft_tchek_recursif(in, opt);
	ft_lstdbldel(&in);
	return (0);
}
