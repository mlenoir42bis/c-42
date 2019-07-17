/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_dir.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 04:30:48 by mlenoir           #+#    #+#             */
/*   Updated: 2016/04/29 12:20:21 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../ft_ls.h"

static void			ft_display_error(char *name)
{
	if (errno == EACCES)
		ft_printf("ls: %s: Permission denied\n", name);
	else
		ft_printf("ls : %s: No such file or directory\n", name);
}

static int			ft_error_init_dir(t_lstdbl_in *lst)
{
	ft_lstdbldel(lst);
	return (0);
}

int					ft_init_stat(t_lstdbl_in *lst, char *path, char *name)
{
	if (!(lst->last->path = ft_n_path(path, name)))
		return (0);
	if (lstat(lst->last->path, &lst->last->st) < 0)
		return (0);
	if (!(lst->last->ps = getpwuid(lst->last->st.st_uid)))
		return (0);
	if (!(lst->last->gr = getgrgid(lst->last->st.st_gid)))
		return (0);
	return (1);
}

int					ft_read_dir(t_lstdbl_in *lst, char *path)
{
	DIR				*rep;
	struct dirent	*file;

	ft_lstdblinit(lst);
	if (!(rep = opendir(path)))
		ft_display_error(path);
	else
	{
		while ((file = readdir(rep)))
		{
			if (!ft_lstdblpushback(lst, file->d_name, ft_strlen(file->d_name)))
				return (ft_error_init_dir(lst));
			if (!ft_init_stat(lst, path, file->d_name))
				return (ft_error_init_dir(lst));
		}
		closedir(rep);
	}
	return (1);
}
