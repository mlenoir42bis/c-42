/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tchek_opt_env.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 04:16:06 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/27 14:19:35 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../minishell.h"

t_opt_env		ft_init_opt_env(void)
{
	t_opt_env	opt;

	opt.unset = 0;
	opt.unset_all = 0;
	opt.opt_null = 0;
	opt.nb_arg = 1;
	opt.err = 1;
	return (opt);
}

int				ft_is_env_opt(char c)
{
	int			i;

	i = -1;
	while (ENVOPT[++i])
		if (ENVOPT[i] == c)
			return (1);
	return (0);
}

t_opt_env		ft_switch_init_opt(t_opt_env opt, char c)
{
	if (c == '-')
		opt.err = 1;
	if (c == 'i')
		opt.unset_all = 1;
	if (c == 'u')
		opt.unset = 1;
	return (opt);
}

t_opt_env		ft_tchek_opt_env(char *arg[])
{
	t_opt_env	opt;
	int			i;
	int			j;

	j = -1;
	i = 0;
	opt = ft_init_opt_env();
	while (++i < ft_tablen(arg) && arg[i][0] == '-' && arg[i][1] != '\0')
	{
		++opt.nb_arg;
		j = 0;
		while (arg[i][++j])
		{
			if (!ft_is_env_opt(arg[i][j]))
			{
				opt.err = 1;
				return (opt);
			}
			else
				opt = ft_switch_init_opt(opt, arg[i][j]);
		}
	}
	opt.err = 0;
	return (opt);
}
