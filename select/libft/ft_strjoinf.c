/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:48:03 by mlenoir           #+#    #+#             */
/*   Updated: 2016/03/15 19:54:14 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strjoinf(char const *s1, char const *s2)
{
	char *str;

	str = ft_strjoin(s1, s2);
	free((void *)s1);
	return (str);
}
