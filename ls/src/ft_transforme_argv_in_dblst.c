/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_transforme_argv_in_dblst.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/03 15:38:32 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/04 18:08:23 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../ft_ls.h"

t_lstdbl_in		ft_transform_argv_in_dblst(char **tab)
{
	t_lstdbl_in	in;
	int			i;

	i = -1;
	ft_lstdblinit(&in);
	while (tab[++i])
	{
		if (!ft_lstdblpushback(&in, tab[i], ft_strlen(tab[i])))
		{
			ft_putendl("Error program : 'transform argv in dblst'");
			ft_lstdbldel(&in);
			exit(0);
		}
	}
	return (in);
}
