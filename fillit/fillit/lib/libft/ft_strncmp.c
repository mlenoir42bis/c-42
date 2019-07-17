/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:49:38 by mlenoir           #+#    #+#             */
/*   Updated: 2015/11/30 16:39:08 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((unsigned char)s1[i] == (unsigned char)s2[i] && i < n)
	{
		if ((unsigned char)s1[i] == '\0' && (unsigned char)s2[i] == '\0')
			return (0);
		if (i == (size_t)(n - 1))
			return (0);
		++i;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
