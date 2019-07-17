/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:38:23 by mlenoir           #+#    #+#             */
/*   Updated: 2016/03/12 04:42:29 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*elem;

	elem = 0;
	if (!(elem = (t_list *)malloc(sizeof(t_list))))
		return (0);
	if (content == 0)
	{
		elem->content = 0;
		elem->content_size = 0;
	}
	else
	{
		if (!(elem->content = (void *)malloc(content_size)))
			return (0);
		ft_memset(elem->content, '\0', content_size);
		ft_memcpy(elem->content, content, content_size);
		elem->content_size = content_size;
	}
	elem->next = 0;
	return (elem);
}
