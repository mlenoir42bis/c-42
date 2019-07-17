/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:53:13 by mlenoir           #+#    #+#             */
/*   Updated: 2015/11/30 18:04:40 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	ft_isspace(int n)
{
	if (n == ' ' || n == '\n' || n == '\t')
		return (1);
	return (0);
}

static int	ft_firstcharnospace(char const *s)
{
	int i;

	i = 0;
	while (ft_isspace(s[i]))
		i++;
	return (i);
}

static int	ft_lastcharnospace(char const *s)
{
	int		leng;

	leng = ft_strlen(s);
	while (ft_isspace(s[leng - 1]))
		leng--;
	return (leng);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*str;

	i = ft_firstcharnospace((char *)s);
	if (s[i] == '\0')
		return (ft_strnew(0));
	j = ft_lastcharnospace((char *)s);
	str = ft_strsub(s, i, j - i);
	if (!str)
		return (0);
	return (str);
}
