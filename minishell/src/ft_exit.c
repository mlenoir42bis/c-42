/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 16:24:01 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/09 16:24:44 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../minishell.h"

void			ft_exit(char **path, char **arg, t_lstdbl_in *in)
{
	ft_freetab(path);
	ft_freetab(arg);
	ft_lstdbldel(in);
	ft_printf("%s*\n**\n", C_CYAN);
	ft_printf("** %s\n**\n*\n%s", "---- Good Bye ----", C_NONE);
	exit(0);
}
