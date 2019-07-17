/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getsplitenv.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/04 18:24:59 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/04 18:25:21 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../minishell.h"

char			**ft_getsplitenv(char *env[], char *elem)
{
	char		*path;
	char		**tab;

	path = ft_getenv(env, elem);
	if ((tab = ft_strsplit(path, ':')))
		return (tab);
	return (0);
}
