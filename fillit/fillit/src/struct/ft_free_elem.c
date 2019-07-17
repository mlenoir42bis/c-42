/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_elem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 17:18:12 by mlenoir           #+#    #+#             */
/*   Updated: 2016/01/08 17:18:27 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/libft/libft.h"
#include "../../includes/fillit.h"

t_elem	*ft_free_elem(t_elem *elem)
{
	if (elem)
	{
		free(elem);
		elem = NULL;
	}
	return (elem);
}
