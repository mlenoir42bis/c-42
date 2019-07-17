/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/25 13:49:13 by mlenoir           #+#    #+#             */
/*   Updated: 2016/02/28 14:28:34 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../p4.h"

t_p4		*ft_listen(t_p4 *p4, int mode)
{
	int		ret;
	char	buf[BUFF_SIZE];

	ret = read(1, buf, BUFF_SIZE);
	if (mode == 1)
		p4->col = ft_atoi(buf);
	if (mode == 2)
		p4->mode = ft_atoi(buf);
	return (p4);
}
