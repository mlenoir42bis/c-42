/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_termattr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/22 07:54:37 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/22 07:55:00 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../select.h"

int			ft_get_termattr(struct termios **term)
{
	int		ret;

	if (!(*term = (struct termios *)malloc(sizeof(struct termios))))
		ft_error("ft_get_termattr", "error malloc term", NULL);
	if ((ret = tcgetattr(STDIN_FILENO, *term)) != 0)
		ft_error("ft_get_termattr", "error tcgetattr", NULL);
	return (ret);
}

int			ft_set_termattr(struct termios **term)
{
	int		ret;

	if ((ret = tcsetattr(0, TCSADRAIN, *term)) != 0)
		ft_error("ft_set_termattr", "error tcsetattr", NULL);
	return (ret);
}
