/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 16:57:19 by mlenoir           #+#    #+#             */
/*   Updated: 2016/01/08 16:57:27 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft/libft.h"
#include "../includes/fillit.h"

t_elem			*ft_read_file(int const fd)
{
	char		buf[SIZE_MAP];
	int			ret;
	t_elem		*elem;
	int			tab_r[26];

	if (!(elem = ft_create_struct_elem()))
		return (0);
	while ((ret = read(fd, buf, SIZE_MAP)) > 0)
	{
		buf[ret] = '\0';
		if (!check_buf(buf, ret) || elem->nb_elem > 25)
			return (ft_free_elem(elem));
		if (!(elem = ft_treat_buf(buf, elem)))
			return (elem);
		elem->nb_elem++;
		elem->elem_n++;
		tab_r[elem->elem_n] = ret;
	}
	if (tab_r[elem->elem_n] != 20)
		return (ft_free_elem(elem));
	return (elem);
}
