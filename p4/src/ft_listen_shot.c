/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listen_shot.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/25 16:47:50 by mlenoir           #+#    #+#             */
/*   Updated: 2016/02/26 18:20:07 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../p4.h"

t_p4		*ft_listen_shot(t_p4 *p4)
{
	ft_printf("It's your turn Player%d\nPlay on col : ", p4->player);
	p4 = ft_listen(p4, 1);
	if (!ft_tchek_data_col(p4) || !ft_tchek_valid_shot(p4))
	{
		while (!ft_tchek_data_col(p4) || !ft_tchek_valid_shot(p4))
		{
			ft_printf("Shot is invalid -> Try again\nPlay on col : ");
			p4 = ft_listen(p4, 1);
		}
	}
	p4->col -= 1;
	return (p4);
}
