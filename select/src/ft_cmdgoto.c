/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmdgoto.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/22 07:58:37 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/22 07:59:02 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../select.h"

int					ft_cmdgoto(int x, int y)
{
	char			*cm;

	if ((cm = tgetstr("cm", NULL)) != NULL)
		tputs(tgoto(cm, x, y), 1, ft_outc);
	else
	{
		ft_error("ft_cmdgoto", "error tgetstr", NULL);
		return (0);
	}
	return (1);
}
