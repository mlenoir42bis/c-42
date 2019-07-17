/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:39:51 by mlenoir           #+#    #+#             */
/*   Updated: 2015/11/30 17:06:20 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		((unsigned char *)str1)[i] = ((unsigned char *)str2)[i];
		if (((unsigned char *)str1)[i] == (unsigned char)c)
			return ((void *)((unsigned char *)str1 + i + 1));
		i++;
	}
	return (0);
}
