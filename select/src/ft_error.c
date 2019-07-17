/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/06 16:58:47 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/18 14:44:33 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../select.h"

int				ft_error(char *name_fct, char *error, char *arg)
{
	ft_printf("%s*\n**\n", C_RED);
	ft_printf("** name fct : %s\n", name_fct);
	if (error)
		ft_printf("** Error : %s", error);
	if (arg)
		ft_printf(" : %s\n", arg);
	else
		ft_putchar('\n');
	ft_printf("**\n*\n%s", C_NONE);
	return (0);
}
