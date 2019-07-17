/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsetenv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/04 19:12:23 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/24 03:06:42 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../minishell.h"

int				ft_unsetenv(t_lstdbl_in *in, char *name)
{
	t_lstdbl	*first;

	if (!name)
	{
		ft_error("ft_unsetenv", "No arg name", NULL);
		return (0);
	}
	first = in->first;
	while (first)
	{
		if (!ft_strncmp(first->content, name, ft_strlen(name)))
		{
			ft_lstdbldelone(in, first);
			return (1);
		}
		first = first->next;
	}
	return (0);
}
