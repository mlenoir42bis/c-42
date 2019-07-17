/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcharn.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 19:49:02 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/20 17:31:49 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_putcharn(char c, size_t n)
{
	char	*str;

	str = ft_strnew(n);
	str = ft_memset(str, c, n);
	ft_putstr(str);
	free(str);
}
