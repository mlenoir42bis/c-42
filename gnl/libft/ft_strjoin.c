/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:47:49 by mlenoir           #+#    #+#             */
/*   Updated: 2015/11/30 18:04:02 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	str = 0;
	str = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!str)
		return (0);
	str = ft_strcpy(str, s1);
	str = ft_strcat(str, s2);
	return (str);
}
