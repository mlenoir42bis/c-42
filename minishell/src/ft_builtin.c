/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_builtin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 16:52:17 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/27 14:21:31 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../minishell.h"

int				ft_builtin_setenv(t_lstdbl_in *in, char **arg)
{
	if (ft_tablen(arg) != 3)
		ft_putendl("setenv: illegal operation usage: setenv [name] [value]\n");
	else
		ft_setenv(in, arg[1], arg[2]);
	return (1);
}

int				ft_builtin_unsetenv(t_lstdbl_in *in, char **arg)
{
	if (ft_tablen(arg) != 2)
		ft_putendl("unsetenv : illegal operation\nusage: unsetenv [name]\n");
	if (!ft_unsetenv(in, arg[1]))
		ft_putendl("unsetenv : param name unknown");
	return (1);
}

int				ft_switch_builtin(char **env, char **path,
		char **arg, t_lstdbl_in *in)
{
	if (!ft_strcmp(arg[0], "cd"))
		return (ft_cd(env, arg));
	if (!ft_strcmp(arg[0], "setenv"))
		return (ft_builtin_setenv(in, arg));
	if (!ft_strcmp(arg[0], "unsetenv"))
		return (ft_builtin_unsetenv(in, arg));
	if (!ft_strcmp(arg[0], "env"))
		return (ft_env(in, arg, path, env));
	if (!ft_strcmp(arg[0], "exit"))
		ft_exit(path, arg, in);
	return (0);
}
