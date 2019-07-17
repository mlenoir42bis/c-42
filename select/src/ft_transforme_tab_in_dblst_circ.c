/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_transforme_tab_in_dblst_circ.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 20:14:35 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/22 03:43:48 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../select.h"

int				ft_transform_tab_in_dblst_circ(char **arg, t_lstdbl_in *in)
{
	int			i;

	i = -1;
	while (arg[++i])
	{
		if (!ft_lstdblpushback_circ(in, arg[i], ft_strlen(arg[i])))
		{
			ft_putendl("Error : 'transform tab in dblst'");
			ft_lstdbldel_circ(in);
			return (0);
		}
	}
	return (1);
}
