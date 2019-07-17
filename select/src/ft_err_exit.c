/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_err_exit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 16:22:03 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/18 14:44:50 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../select.h"

void			ft_err_exit(char *error)
{
	ft_printf("%s*\n**\n", C_RED);
	ft_printf("** %s\n**\n*\n%s", error, C_NONE);
	exit(0);
}
