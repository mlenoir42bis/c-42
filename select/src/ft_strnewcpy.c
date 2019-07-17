/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnewcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/18 15:48:38 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/10 00:51:47 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../select.h"

char	*ft_strnewcpy(char *str)
{
	char	*new;
	size_t	size;

	size = ft_strlen(str);
	if ((new = ft_strnew(size)))
	{
		new = ft_strcpy(new, str);
		new[size + 1] = '\0';
	}
	return (new);
}
