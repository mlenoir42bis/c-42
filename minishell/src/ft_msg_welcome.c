/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_msg_welcome.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 16:55:11 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/27 14:18:23 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../minishell.h"

void			ft_msg_welcome(void)
{
	ft_printf("%s*\n**\n", C_CYAN);
	ft_printf("** %s\n**\n*\n%s", "---- Welcome in shell-ml ----", C_NONE);
}
