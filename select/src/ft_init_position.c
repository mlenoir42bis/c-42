/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_position.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 22:33:19 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/23 22:33:45 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../select.h"

t_position			ft_init_position(void)
{
	t_position		pos;

	pos.i = 0;
	pos.j = 0;
	pos.x = 0;
	pos.y = 0;
	return (pos);
}
