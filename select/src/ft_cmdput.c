/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmdput.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/22 07:57:59 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/22 07:58:20 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../select.h"

int					ft_cmdput(char *arg)
{
	char			*res;

	if ((res = tgetstr(arg, NULL)) == NULL)
	{
		ft_error("ft_cmdput", "error tgetstr", arg);
		return (0);
	}
	tputs(res, 0, ft_outc);
	return (1);
}
