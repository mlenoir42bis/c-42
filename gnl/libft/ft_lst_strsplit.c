/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_strsplit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 22:45:33 by mlenoir           #+#    #+#             */
/*   Updated: 2015/11/30 16:51:39 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int		ft_countword(char const *s, char c)
{
	int			i;
	int			word;

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

static size_t	ft_sizeword(char const *s, char c, int *i)
{
	size_t		len_word;

	len_word = 0;
	while (s[*i] != c && s[*i])
	{
		len_word++;
		*i += 1;
	}
	return (len_word);
}

static void		ft_lst_addword(char const *s, char c, int *i, t_list **lst)
{
	size_t		len_word;
	char		*word;

	len_word = ft_sizeword(s, c, i);
	word = ft_strsub(s, *i - len_word, len_word);
	ft_lstpushback(lst, word, len_word);
	free(word);
}

t_list			*ft_lst_strsplit(char const *s, char c)
{
	t_list		*lst;
	int			j;
	int			i;

	lst = 0;
	if (!s || !ft_countword(s, c))
		return (lst);
	j = 0;
	i = 0;
	while (j < ft_countword(s, c))
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			ft_lst_addword(s, c, &i, &lst);
			j++;
		}
		i++;
	}
	return (lst);
}
