/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 16:54:21 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/27 14:18:59 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../minishell.h"

int				ft_treat_arg(char **env, char **path,
		char **arg, t_lstdbl_in *in)
{
	char		*n_arg;

	if (!ft_switch_builtin(env, path, arg, in))
	{
		if (arg[0][0] != '/')
		{
			n_arg = ft_strjoin("/", arg[0]);
			free(arg[0]);
			arg[0] = n_arg;
		}
		ft_execv_arg(path, arg);
	}
	return (0);
}
