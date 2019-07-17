/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:42:46 by mlenoir           #+#    #+#             */
/*   Updated: 2015/11/30 16:51:13 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_printnbr(va_list ap)
{
	int		i;
	char	*s;

	i = va_arg(ap, int);
	s = ft_itoa(i);
	ft_putstr(s);
	return (ft_strlen(s));
}
