/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/04 19:13:53 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/24 04:17:01 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../minishell.h"

void			ft_help_env(void)
{
	ft_putendl("-------------------------");
	ft_putendl("usage: env [-iu] [name] [cmd] [-opt cmd]");
	ft_putendl("-------------------------");
}

int				ft_env(t_lstdbl_in *in, char *arg[], char **path, char **env)
{
	t_opt_env	opt;

	if (ft_tablen(arg) == 1)
	{
		ft_lstdblprint(in->first);
		return (1);
	}
	opt = ft_tchek_opt_env(arg);
	if (!opt.err)
	{
		if (opt.unset_all || opt.opt_null)
			ft_lstdbldel(in);
		else if (opt.unset)
			ft_unsetenv(in, arg[opt.nb_arg]);
		if (ft_tablen(arg) > opt.nb_arg + 1)
			ft_treat_arg(env, path, arg + opt.nb_arg + 1, in);
	}
	else
		ft_help_env();
	return (1);
}
