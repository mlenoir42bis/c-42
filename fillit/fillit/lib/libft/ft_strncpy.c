/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:49:54 by mlenoir           #+#    #+#             */
/*   Updated: 2015/11/30 17:26:57 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*pt_dest;

	pt_dest = dest;
	while (n)
	{
		if (!*src)
			*pt_dest++ = '\0';
		else
			*pt_dest++ = *src++;
		n--;
	}
	return (dest);
}
