/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:35:15 by mlenoir           #+#    #+#             */
/*   Updated: 2015/11/28 18:35:17 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isprint(int n)
{
	if (n > 31 && n < 127)
		return (1);
	return (0);
}
