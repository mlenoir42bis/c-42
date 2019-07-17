/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:41:31 by mlenoir           #+#    #+#             */
/*   Updated: 2015/11/30 17:08:26 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*tmp;

	tmp = ft_memalloc((size_t)n);
	ft_memcpy(tmp, src, n);
	ft_memcpy(dest, tmp, n);
	ft_memdel(&tmp);
	return (dest);
}
