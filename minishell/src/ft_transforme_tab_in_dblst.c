/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_transforme_tab_in_dblst.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/04 18:10:16 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/06 21:48:06 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../minishell.h"

int				ft_transform_tab_in_dblst(char **tab, t_lstdbl_in *in)
{
	int			i;

	i = -1;
	while (tab[++i])
	{
		if (!ft_lstdblpushback(in, tab[i], ft_strlen(tab[i])))
		{
			ft_putendl("Error program : 'transform tab in dblst'");
			ft_lstdbldel(in);
			return (0);
		}
	}
	return (1);
}
