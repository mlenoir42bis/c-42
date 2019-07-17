/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:50:46 by mlenoir           #+#    #+#             */
/*   Updated: 2015/11/30 17:28:17 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i1;
	size_t	i2;
	size_t	i3;

	if (!(*to_find))
		return ((char *)str);
	i1 = 0;
	while (str[i1] && i1 < len)
	{
		i2 = 0;
		i3 = i1;
		while (str[i3] == to_find[i2] && i3 < len)
		{
			++i2;
			++i3;
			if (!(to_find[i2]))
				return ((char *)str + i1);
		}
		++i1;
	}
	return (0);
}
