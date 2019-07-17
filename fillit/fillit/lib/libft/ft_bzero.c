/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:33:04 by mlenoir           #+#    #+#             */
/*   Updated: 2015/11/30 16:52:17 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*m;

	m = (char*)s;
	i = 0;
	while (i < n)
	{
		m[i] = '\0';
		i++;
	}
	return (0);
}
