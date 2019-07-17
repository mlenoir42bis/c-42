/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/18 15:38:43 by mlenoir           #+#    #+#             */
/*   Updated: 2016/04/29 12:16:22 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../ft_ls.h"

t_lstdbl_in			ft_switch_sort(t_lstdbl_in in, t_ls_opt *opt)
{
	in = ft_lstdblsort_desc(&in);
	if (!opt->a)
		ft_lstdbldelhidden(&in);
	if (opt->t && opt->r)
		return (ft_lstdblsort_ctime_reverse(&in));
	if (opt->t)
		in = ft_lstdblsort_ctime(&in);
	if (opt->r)
		in = ft_lstdblsort_asc(&in);
	return (in);
}
