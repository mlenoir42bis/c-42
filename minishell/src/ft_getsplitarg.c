/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getsplitarg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/04 18:28:33 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/24 02:58:52 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../minishell.h"

char			**ft_getsplitarg(char *line)
{
	char		**arg;

	if ((arg = ft_strsplit(line, ' ')))
		return (arg);
	return (0);
}
