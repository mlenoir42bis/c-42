/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_center.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/22 08:03:34 by mlenoir           #+#    #+#             */
/*   Updated: 2016/06/06 12:47:59 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../select.h"

void			ft_putstr_center(char *str)
{
	size_t		size;
	int			mid;

	size = ft_strlen(str);
	mid = (g_term.ws.ws_col - size) / 2;
	if (mid > 0)
		ft_putcharn(' ', mid);
	ft_putendl(str);
}
