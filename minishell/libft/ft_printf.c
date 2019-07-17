/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:42:15 by mlenoir           #+#    #+#             */
/*   Updated: 2015/11/30 16:50:07 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int		ft_switchprint(va_list ap, char c)
{
	if (c == 's')
		return (ft_printstr(ap));
	if (c == 'c')
		return (ft_printchar(ap));
	if (c == 'd' || c == 'i')
		return (ft_printnbr(ap));
	if (c == '%')
	{
		ft_putchar(c);
		return (1);
	}
	return (0);
}

int				ft_printf(char *str, ...)
{
	va_list		ap;
	int			i;
	int			len;

	i = 0;
	len = 0;
	va_start(ap, str);
	while (str[i] != '\0')
	{
		if (str[i] != '%')
		{
			ft_putchar(str[i]);
			len++;
		}
		else
			len += ft_switchprint(ap, str[i += 1]);
		i++;
	}
	va_end(ap);
	return (len);
}
