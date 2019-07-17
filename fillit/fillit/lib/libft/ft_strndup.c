/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 21:34:22 by mlenoir           #+#    #+#             */
/*   Updated: 2015/11/30 18:22:21 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strndup(const char *s, size_t n)
{
	char	*tmp;
	int		i;

	i = 0;
	tmp = ft_memalloc(n);
	if (tmp)
	{
		while (n)
		{
			tmp[i] = s[i];
			i++;
			n--;
		}
		tmp[i] = '\0';
	}
	return (tmp);
}
