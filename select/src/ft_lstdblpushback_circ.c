/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdblpushback_circ.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 20:14:12 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/25 06:21:05 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../select.h"

int				ft_lstdblpushback_circ(t_lstdbl_in *in,
		void const *content, size_t content_size)
{
	t_lstdbl	*new;

	if (!(new = ft_lstdblnew(content, content_size)))
		return (0);
	new->prev = in->last;
	new->next = in->first;
	if (in->last)
		in->last->next = new;
	else
		in->first = new;
	in->last = new;
	in->first->prev = in->last;
	in->len += 1;
	return (1);
}
