/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:34:22 by mlenoir           #+#    #+#             */
/*   Updated: 2015/11/28 18:34:25 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isascii(int n)
{
	if (n >= 0 && n <= 127)
		return (1);
	return (0);
}
