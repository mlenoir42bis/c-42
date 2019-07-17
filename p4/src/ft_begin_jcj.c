/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_begin_jcj.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 16:05:04 by mlenoir           #+#    #+#             */
/*   Updated: 2016/02/28 14:33:31 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../p4.h"

void		ft_begin_jcj(t_p4 *p4)
{
	int		i;

	i = 0;
	while (!p4->win && !p4->end)
	{
		p4->player = (i % 2) ? 1 : 2;
		ft_display_tab(p4);
		p4 = ft_listen_shot(p4);
		p4 = ft_add_shot(p4);
		p4 = ft_tchek_win(p4);
		p4 = ft_tchek_end_game(p4);
		++i;
	}
	ft_display_tab(p4);
	if (p4->win)
		ft_printf("Player%d win -> Good game !\n", p4->player);
	if (p4->end)
		ft_printf("No winner in this part !\n");
	ft_free_tab2d(p4->tab, p4->mx_lgn);
	p4->tab = ft_init_tab(p4->mx_lgn, p4->mx_col);
	p4->win = 0;
	p4->end = 0;
	ft_begin(p4);
}
