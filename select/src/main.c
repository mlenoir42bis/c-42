/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 04:54:03 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/24 04:42:37 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../select.h"

int					main(int argc, char *argv[])
{
	char			buf[4];

	ft_tchek_init(argc);
	ft_term_init();
	ft_term_init_var(argv);
	ft_cmdput("cl");
	ft_cmdput("vs");
	ft_cmdput("ti");
	while (42)
	{
		ft_display();
		read(0, buf, 4);
		ft_cmdput("cl");
		ft_signal();
		if (g_term.ws.ws_row < g_term.lst_circ.len)
			ft_switch_move_ncol(*(unsigned int*)buf);
		else
			ft_switch_move_1col(*(unsigned int*)buf);
		ft_end_display(*(unsigned int*)buf);
		ft_select(buf, g_term.lst_circ);
		ft_end(*(unsigned int*)buf);
	}
	return (0);
}
