/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdblsize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/12 05:48:11 by mlenoir           #+#    #+#             */
/*   Updated: 2016/03/12 05:49:16 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../ft_ls.h"

int				ft_lstdblsize(t_lstdbl **root)
{
	int			i;
	t_lstdbl	*tmp;

	tmp = *root;
	i = 1;
	if (*root != NULL)
	{
		while (tmp->next != NULL)
		{
			i++;
			tmp = tmp->next;
		}
		return (i);
	}
	return (0);
}
