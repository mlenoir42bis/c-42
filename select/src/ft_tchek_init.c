/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tchek_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/22 07:53:28 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/22 07:53:51 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../select.h"

void		ft_tchek_init(int ac)
{
	char	*name_term;

	if ((name_term = getenv("TERM")) == NULL)
		ft_err_exit("No terminal type specified in env.");
	if ((tgetent(NULL, name_term)) != 1)
		ft_err_exit("Termcap database not found.");
	if (ac < 2)
		ft_err_exit("ft_select: Not enought arguments.");
}
