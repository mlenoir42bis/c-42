/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_begin_jcia.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/28 13:15:30 by mlenoir           #+#    #+#             */
/*   Updated: 2016/02/28 14:38:39 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../p4.h"

t_p4		*ft_end_jcia(t_p4 *p4)
{
	ft_printf("Final map\n");
	ft_display_tab(p4);
	if (p4->win)
		ft_printf("Player%d win -> Good game !\n", p4->player);
	if (p4->end)
		ft_printf("No winner in this part !\n");
	ft_free_tab2d(p4->tab, p4->mx_lgn);
	p4->tab = ft_init_tab(p4->mx_lgn, p4->mx_col);
	p4->win = 0;
	p4->end = 0;
	return (p4);
}

void		ft_begin_jcia(t_p4 *p4)
{
	while (!p4->win && !p4->end)
	{
		p4->player = (p4->player % 2 == 0) ? 1 : 2;
		ft_display_tab(p4);
		if (p4->player == 1)
		{
			p4 = ft_listen_shot(p4);
			p4 = ft_add_shot(p4);
		}
		else
		{
			ft_printf("It's turn to Ia\n");
			p4 = ft_ia_play(p4);
		}
		p4 = ft_tchek_win(p4);
		p4 = ft_tchek_end_game(p4);
	}
	p4 = ft_end_jcia(p4);
	ft_begin(p4);
}
