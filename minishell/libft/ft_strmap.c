/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:48:57 by mlenoir           #+#    #+#             */
/*   Updated: 2015/12/01 04:32:25 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	size_t	i;

	str = ft_strnew(ft_strlen(s));
	if (!str)
		return (0);
	i = 0;
	while (s[i] && i < ft_strlen(s) + 1)
	{
		str[i] = f(s[i]);
		i++;
	}
	return (str);
}
