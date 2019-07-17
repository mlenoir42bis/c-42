/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:48:25 by mlenoir           #+#    #+#             */
/*   Updated: 2015/11/30 16:37:48 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t len_dest;

	i = 0;
	while (dest[i] && i < size)
		i++;
	len_dest = i;
	while (src[i - len_dest] && i < (size - 1))
	{
		dest[i] = src[i - len_dest];
		i++;
	}
	if (len_dest < size)
		dest[i] = '\0';
	return (len_dest + ft_strlen(src));
}
