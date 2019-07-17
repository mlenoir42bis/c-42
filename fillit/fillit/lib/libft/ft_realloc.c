/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:45:15 by mlenoir           #+#    #+#             */
/*   Updated: 2015/11/30 16:43:52 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void *news;

	news = 0;
	if (!ptr)
		return (ft_memalloc(size));
	if (!size || size <= (size_t)0)
	{
		ft_memdel((void **)&ptr);
		return (0);
	}
	news = (void *)malloc(sizeof(news) * size + 1);
	if (news && ptr)
	{
		news = ft_memcpy(news, ptr, size);
		free(ptr);
		return (news);
	}
	return (ptr);
}
