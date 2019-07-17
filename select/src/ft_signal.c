/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_signal.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/22 08:00:13 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/23 20:45:36 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../select.h"

void				ft_signal(void)
{
	signal(SIGQUIT, ft_stop);
	signal(SIGKILL, ft_stop);
	signal(SIGINT, ft_stop);
	signal(SIGABRT, ft_stop);
	signal(SIGTERM, ft_stop);
	signal(SIGWINCH, ft_getwinsize);
	signal(SIGCONT, ft_keep);
}
