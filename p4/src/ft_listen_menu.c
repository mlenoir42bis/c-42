/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listen_menu.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/25 14:48:28 by mlenoir           #+#    #+#             */
/*   Updated: 2016/02/28 14:10:53 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../p4.h"

t_p4		*ft_listen_menu(t_p4 *p4)
{
	ft_display_menu();
	p4 = ft_listen(p4, 2);
	if (!ft_tchek_data_menu(p4))
	{
		while (!ft_tchek_data_menu(p4))
		{
			ft_printf("Error Parameter Unknow -> Try again !\n");
			p4 = ft_listen(p4, 2);
		}
	}
	ft_printf("**********************************************\n");
	if (p4->mode == 1)
		ft_printf("		Begin mode JcJ			\n");
	if (p4->mode == 2)
		ft_printf("		Begin mode JcIA			\n");
	if (p4->mode == 3)
		ft_printf("		Good Bye				\n");
	ft_printf("**********************************************\n");
	return (p4);
}
