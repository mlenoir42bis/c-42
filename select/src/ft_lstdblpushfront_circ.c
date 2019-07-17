/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdblpushfront_circ.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 20:14:23 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/22 14:49:45 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../select.h"

int				ft_lstdblpushfront_circ(t_lstdbl_in *in,
		void const *content, size_t content_size)
{
	t_lstdbl	*new;

	if (!(new = ft_lstdblnew(content, content_size)))
		return (0);
	new->next = in->first;
	new->prev = in->first;
	if (in->first)
		in->first->prev = new;
	else
		in->last = new;
	in->first->prev = in->last;
	in->first = new;
	in->len += 1;
	return (1);
}
