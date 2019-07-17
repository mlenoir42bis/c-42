/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:35:36 by mlenoir           #+#    #+#             */
/*   Updated: 2015/11/30 18:17:17 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static char	*ft_divint(char *str, int *i, int n)
{
	str[*i] = n % 10 + '0';
	*i += 1;
	while ((n /= 10) > 0)
	{
		str[*i] = n % 10 + '0';
		*i += 1;
	}
	return (str);
}

static char	*ft_intmax(char *str, int n)
{
	if (n < 0)
		return (ft_strcpy(str, "-2147483648"));
	else
		return (ft_strcpy(str, "2147483648"));
}

char		*ft_itoa(int n)
{
	int		i;
	int		sign;
	char	*str;

	str = 0;
	i = 0;
	if (!(str = (char *)malloc(sizeof(*str) * (ft_intlen(n, 0)))))
		return (0);
	if (n < -2147483647 || n > 2147483647)
		return (ft_intmax(str, n));
	if (n == 0)
		str[i++] = '0';
	if (str && n != 0)
	{
		if ((sign = n) < 0)
			n = -n;
		str = ft_divint(str, &i, n);
		if (sign < 0)
			str[i++] = '-';
	}
	str[i] = '\0';
	return (ft_strrev(str));
}
