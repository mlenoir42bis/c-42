/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:42:30 by mlenoir           #+#    #+#             */
/*   Updated: 2015/11/30 16:49:55 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_printlst(t_list *list)
{
	if (list != NULL)
	{
		while (list)
		{
			ft_putendl(list->content);
			list = list->next;
		}
	}
}
