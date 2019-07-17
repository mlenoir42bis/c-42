/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:52:14 by mlenoir           #+#    #+#             */
/*   Updated: 2015/11/30 18:02:38 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ret;

	if (!(ret = ft_strnew(len)))
		return (NULL);
	if (start + len > (unsigned long)ft_strlen(s))
		if (start <= (unsigned long)ft_strlen(s))
			len = ft_strlen(s) - start;
	ret = ft_strncpy(ret, s + start, len);
	return (ret);
}
