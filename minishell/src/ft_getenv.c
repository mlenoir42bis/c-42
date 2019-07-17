/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/04 18:23:54 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/04 18:24:28 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../minishell.h"

char			*ft_getenv(char *env[], char *elem)
{
	int			i;
	char		*ret;

	i = -1;
	while (env[++i])
		if ((ret = ft_strnstr(env[i], elem, 4)))
			return (ret + ft_strlen(elem) + 1);
	return (0);
}
