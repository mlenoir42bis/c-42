/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:40:57 by mlenoir           #+#    #+#             */
/*   Updated: 2015/11/30 17:06:06 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *pt_dest;
	char *pt_src;

	pt_src = (char *)src;
	pt_dest = (char *)dest;
	while (n--)
		(*pt_dest++) = (*pt_src++);
	return (dest);
}
