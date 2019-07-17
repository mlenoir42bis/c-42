/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/22 08:00:53 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/23 22:46:03 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../select.h"

void				ft_print_elem_cursor(char *str, int mode)
{
	ft_cmdput("us");
	if (!mode)
		ft_putendl(str);
	else
		ft_putstr(str);
	ft_cmdput("ue");
}

void				ft_print_elem_cursor_reversed(char *str, int mode)
{
	ft_cmdput("us");
	ft_putstr("\033[7m");
	if (!mode)
		ft_putendl(str);
	else
		ft_putstr(str);
	ft_putstr("\033[m");
	ft_cmdput("ue");
}

void				ft_print_elem_reversed(char *str, int mode)
{
	ft_putstr("\033[7m");
	if (!mode)
		ft_putendl(str);
	else
		ft_putstr(str);
	ft_putstr("\033[m");
}
