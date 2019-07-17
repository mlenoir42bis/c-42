/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_rev.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 22:38:14 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/23 23:14:35 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../select.h"

int					ft_div_rev(void)
{
	int		ret;
	int		col;

	ret = 0;
	col = g_term.max_strlen + 1;
	while (col < g_term.ws.ws_col)
	{
		if (col < g_term.ws.ws_col)
			ret++;
		col = col + g_term.max_strlen + 1;
	}
	return (ret);
}
