/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdblpushfront.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/13 01:21:56 by mlenoir           #+#    #+#             */
/*   Updated: 2016/04/30 17:13:53 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../minishell.h"

int				ft_lstdblpushfront(t_lstdbl_in *in,
		void const *content, size_t content_size)
{
	t_lstdbl	*new;

	if (!(new = ft_lstdblnew(content, content_size)))
		return (0);
	new->next = in->first;
	if (in->first)
		in->first->prev = new;
	else
		in->last = new;
	in->first = new;
	return (1);
}
