/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:35:55 by mlenoir           #+#    #+#             */
/*   Updated: 2015/11/30 18:15:58 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (*alst != NULL)
	{
		if (new)
		{
			new->next = *alst;
			*alst = new;
		}
	}
	else if (new)
		*alst = new;
}
