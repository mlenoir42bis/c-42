/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 16:20:47 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/24 04:13:52 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../minishell.h"

int			ft_cd(char **env, char **arg)
{
	int		ret;

	if (!arg[1] || arg[1][0] == '~')
		ret = chdir(ft_getenv(env, "HOME"));
	else
		ret = chdir(arg[1]);
	if (ret == -1)
		ft_printf("cd: %s: Is not a directory\n", arg[1]);
	return (1);
}
