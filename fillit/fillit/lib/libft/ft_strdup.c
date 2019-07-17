/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:47:02 by mlenoir           #+#    #+#             */
/*   Updated: 2015/12/07 09:12:34 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s)
{
	char	*tmp;
	size_t	i;

	i = 0;
	tmp = (char*)malloc(sizeof(tmp) * (ft_strlen(s) + 1));
	if (!tmp)
		return (0);
	while (i <= ft_strlen(s) + 1)
	{
		tmp[i] = s[i];
		i++;
	}
	return (tmp);
}
