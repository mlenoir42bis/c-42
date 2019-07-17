/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:40:31 by mlenoir           #+#    #+#             */
/*   Updated: 2015/11/30 17:09:12 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*pt_s1;
	unsigned char	*pt_s2;

	pt_s1 = (unsigned char *)s1;
	pt_s2 = (unsigned char *)s2;
	while (n--)
	{
		if (*pt_s1 != *pt_s2)
			return (*pt_s1 - *pt_s2);
		pt_s1++;
		pt_s2++;
	}
	return (0);
}
