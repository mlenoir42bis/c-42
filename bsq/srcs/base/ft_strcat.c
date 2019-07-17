/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/20 13:13:08 by mlenoir           #+#    #+#             */
/*   Updated: 2015/09/20 13:16:37 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	j = 0;
	i = ft_strlen(dest);
	while(src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}	
	dest[i + j] = '\0';
	return (dest);
}
