/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:51:36 by mlenoir           #+#    #+#             */
/*   Updated: 2015/11/30 19:54:30 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	ft_countword(char const *s, char c)
{
	int		i;
	int		word;

	i = 0;
	word = 0;
	if (s)
	{
		while (s[i])
		{
			if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
				word++;
			i++;
		}
	}
	return (word);
}

static char	*ft_add_word(char const *s, int *i, char c)
{
	char	*word;
	int		n;

	n = *i;
	while (s[n] != c && s[n])
		n++;
	if ((word = (char *)malloc(sizeof(char) * n)))
	{
		n = 0;
		while (s[*i] != c && s[*i] != '\0')
		{
			word[n] = s[*i];
			*i += 1;
			n++;
		}
	}
	return (word);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if ((tab = (char **)malloc(sizeof(char *) * (ft_countword(s, c) + 1))))
	{
		if (!s || !ft_countword(s, c))
			tab[0] = NULL;
		while (j < ft_countword(s, c))
		{
			while (s[i] == c && s[i])
				i++;
			if (s[i] != c && s[i])
				tab[j++] = ft_add_word(s, &i, c);
			i++;
		}
	}
	return (tab);
}
