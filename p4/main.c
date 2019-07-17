/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/24 21:16:45 by mlenoir           #+#    #+#             */
/*   Updated: 2016/02/28 19:29:43 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/libft.h"
#include "p4.h"

int			main(int argc, char *argv[])
{
	t_p4	*p4;

	if (argc == 3 && ft_tchek_arg(argv[1], argv[2]))
	{
		if (!(p4 = ft_init(argv[1], argv[2])))
			return (0);
		ft_begin(p4);
		ft_free_tab2d(p4->tab, p4->mx_lgn);
		free(p4);
	}
	else
	{
		ft_printf("Error arguments -> waiting :\n");
		ft_printf("1. lgn (min 6)\n2. col (min 7)\n");
	}
	return (0);
}
