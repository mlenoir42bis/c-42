/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_begin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/25 15:03:29 by mlenoir           #+#    #+#             */
/*   Updated: 2016/02/25 15:04:17 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../p4.h"

void		ft_begin(t_p4 *p4)
{
	p4 = ft_listen_menu(p4);
	if (p4->mode == 1)
		ft_begin_jcj(p4);
	if (p4->mode == 2)
		ft_begin_jcia(p4);
	if (p4->mode == 3)
		exit(0);
}
