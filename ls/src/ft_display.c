/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/20 11:59:32 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/03 15:44:12 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/includes/libft.h"
#include "./ft_ls.h"

t_lstdbl_in			ft_display(t_lstdbl_in in, t_ls_opt *opt)
{
	t_lstdbl		*first;

	in = ft_switch_sort(in, opt);
	first = in.first;
	if (opt->l)
		ft_print_l(in);
	else
	{
		while (first)
		{
			ft_printf("%s\n", first->content);
			first = first->next;
		}
	}
	return (in);
}
