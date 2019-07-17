/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:40:13 by mlenoir           #+#    #+#             */
/*   Updated: 2015/11/30 17:08:41 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void					*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		car;
	const unsigned char	*ptr;
	size_t				i;

	i = 0;
	car = (unsigned char)c;
	ptr = (const unsigned char*)s;
	while (i < n)
	{
		if (*ptr == car)
			return ((void*)ptr);
		ptr++;
		i++;
	}
	return (0);
}
