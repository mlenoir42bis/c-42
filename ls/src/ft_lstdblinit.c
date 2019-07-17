/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdblinit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/12 06:30:37 by mlenoir           #+#    #+#             */
/*   Updated: 2016/03/13 01:16:43 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../ft_ls.h"

void			ft_lstdblinit(t_lstdbl_in *in)
{
	in->first = NULL;
	in->last = NULL;
}
