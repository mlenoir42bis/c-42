/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_n_path.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/20 12:27:22 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/06 17:39:14 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../ft_ls.h"

char				*ft_n_path(char *path, char *name)
{
	int				size;
	char			*n_name;

	size = ft_strlen(path);
	if (path[size - 1] == '/')
	{
		n_name = ft_strjoin(path, name);
		return (n_name);
	}
	else
	{
		n_name = ft_strcat(path, "/");
		n_name = ft_strjoin(n_name, name);
		return (n_name);
	}
	return (0);
}
