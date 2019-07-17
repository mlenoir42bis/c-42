/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 10:55:07 by mlenoir           #+#    #+#             */
/*   Updated: 2015/11/30 16:42:20 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static void	ft_intmax(int n, int fd)
{
	if (n < 0)
		ft_putstr_fd("-2147483648", fd);
	else
		ft_putstr_fd("2147483648", fd);
}

void		ft_putnbr_fd(int n, int fd)
{
	if (n < -2147483647 || n > 2147483647)
	{
		ft_intmax(n, fd);
	}
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = n * -1;
		}
		if (n >= 10)
		{
			ft_putnbr_fd(n / 10, fd);
		}
		ft_putchar_fd(n % 10 + '0', fd);
	}
}
