/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdblnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/12 05:19:19 by mlenoir           #+#    #+#             */
/*   Updated: 2016/03/23 08:54:32 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../ft_ls.h"

t_lstdbl		*ft_lstdblnew(void const *content, size_t content_size)
{
	t_lstdbl	*elem;

	elem = 0;
	if (!(elem = (t_lstdbl *)malloc(sizeof(t_lstdbl))))
		return (0);
	if (content == 0)
	{
		elem->content = 0;
		elem->content_size = 0;
	}
	else
	{
		if (!(elem->content = (void *)malloc(content_size + 1)))
			return (0);
		ft_memcpy(elem->content, content, content_size + 1);
		elem->content_size = content_size;
	}
	elem->next = 0;
	elem->prev = 0;
	return (elem);
}
