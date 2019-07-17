/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/04 19:13:14 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/27 14:20:30 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../minishell.h"

int				ft_setenv(t_lstdbl_in *in, char *name, char *value)
{
	t_lstdbl	*first;
	char		*n_path;

	if (!(n_path = ft_strjoin(name, ft_strjoin("=", value))))
		return (0);
	first = in->first;
	while (first)
	{
		if (!ft_strncmp(first->content, name, ft_strlen(name)))
		{
			if (!(first->content = ft_strjoin(name, ft_strjoin("=", value))))
				return (0);
			else
			{
				free(first->content);
				return (1);
			}
		}
		first = first->next;
	}
	if (!(n_path = ft_strjoin(name, ft_strjoin("=", value))))
		return (0);
	ft_lstdblpushback(in, n_path, ft_strlen(n_path));
	free(n_path);
	return (1);
}
