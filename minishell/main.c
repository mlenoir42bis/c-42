/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 04:54:03 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/27 14:23:32 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/includes/libft.h"
#include "./minishell.h"

void			ft_infinite_loop(char **env, char **path, t_lstdbl_in *in)
{
	char		*line;
	char		**arg;

	if (env && path && in)
		;
	line = NULL;
	while (42)
	{
		ft_printf("%s# %s $> %s", C_GREEN, ft_getenv(env, "USER"), C_NONE);
		get_next_line(0, &line);
		arg = ft_getsplitarg(line);
		if (arg[0] != 0)
		{
			free(line);
			ft_treat_arg(env, path, arg, in);
			ft_freetab(arg);
		}
	}
}

int				main(int argc, char *argv[], char *env[])
{
	char		**path;
	t_lstdbl_in	in;

	if (argc && argv && env)
		ft_msg_welcome();
	if (!(path = ft_getsplitenv(env, "PATH")))
		ft_err_exit("Error ft_getsplitenv -> try again");
	ft_lstdblinit(&in);
	if (!(ft_transform_tab_in_dblst(env, &in)))
		ft_err_exit("Error ft_transform_tab_in_dblst -> try again");
	ft_infinite_loop(env, path, &in);
	return (0);
}
