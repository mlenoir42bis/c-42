/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:43:02 by mlenoir           #+#    #+#             */
/*   Updated: 2015/11/30 16:50:37 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_printstr(va_list ap)
{
	char	*s;

	s = va_arg(ap, char *);
	if (s == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	ft_putstr(s);
	return (ft_strlen(s));
}
