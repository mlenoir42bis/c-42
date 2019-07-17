/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_struct_elem.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 17:13:02 by mlenoir           #+#    #+#             */
/*   Updated: 2016/01/08 17:16:53 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/libft/libft.h"
#include "../../includes/fillit.h"

t_elem			*ft_create_struct_elem(void)
{
	t_elem		*elem;

	elem = NULL;
	if (!(elem = malloc(sizeof(t_elem))))
		return (0);
	elem->nb_elem = 0;
	elem->elem_n = 0;
	return (elem);
}
