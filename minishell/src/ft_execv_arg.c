/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execv_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 16:27:05 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/27 04:07:35 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../minishell.h"

int				ft_execv_arg(char **path, char **arg)
{
	char		*ret;
	pid_t		pid;

	if (!(ret = ft_tchek_access(path, arg[0])))
		return (ft_error("Ft_tchek_access", "Command not found", arg[0] + 1));
	pid = fork();
	if (!pid)
		execv(ret, arg);
	else if (pid > 0)
		wait(NULL);
	else
		return (ft_error("ft_execv_arg", "Fork error", NULL));
	free(ret);
	return (1);
}
