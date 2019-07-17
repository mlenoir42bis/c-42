/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getwinsize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/22 07:55:38 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/23 23:13:29 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../select.h"

void		ft_getwinsize(int ac)
{
	if (ac)
		;
	ioctl(1, TIOCGWINSZ, &g_term.ws);
	g_term.nb_col = ft_div_rev();
	ft_cmdput("cl");
	ft_display();
}
