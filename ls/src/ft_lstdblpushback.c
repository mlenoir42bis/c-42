/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdblpushback.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/12 05:19:58 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/22 03:54:15 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../ft_ls.h"

int				ft_lstdblpushback(t_lstdbl_in *in,
		void const *content, size_t content_size)
{
	t_lstdbl	*new;

	if (!(new = ft_lstdblnew(content, content_size)))
		return (0);
	new->prev = in->last;
	if (in->last)
		in->last->next = new;
	else
		in->first = new;
	in->last = new;
	return (1);
}
