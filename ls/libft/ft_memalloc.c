/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:39:30 by mlenoir           #+#    #+#             */
/*   Updated: 2015/11/30 16:42:48 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memalloc(size_t size)
{
	char *ptr;

	ptr = (char *)malloc(sizeof(ptr) * size + 1);
	if (!ptr)
		return (0);
	ft_memset(ptr, 0, size);
	return ((void*)ptr);
}
