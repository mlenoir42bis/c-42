/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 10:54:54 by mlenoir           #+#    #+#             */
/*   Updated: 2015/11/30 16:41:12 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static void	ft_intmax(int n)
{
	if (n < 0)
		ft_putstr("-2147483648");
	else
		ft_putstr("2147483648");
}

void		ft_putnbr(int n)
{
	if (n < -2147483647 || n > 2147483647)
	{
		ft_intmax(n);
	}
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			n = n * -1;
		}
		if (n >= 10)
		{
			ft_putnbr(n / 10);
		}
		ft_putchar(n % 10 + '0');
	}
}
