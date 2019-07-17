/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tchek_access.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 16:26:21 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/24 04:04:48 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../minishell.h"

char			*ft_tchek_access(char **path, char *name)
{
	int			i;
	int			ret;
	char		*n_path;

	i = -1;
	while (path[++i])
	{
		if (!(n_path = ft_strjoin(path[i], name)))
			return (0);
		ret = access(n_path, X_OK);
		if (!ret)
			return (n_path);
		free(n_path);
	}
	return (0);
}
