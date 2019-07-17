/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 17:30:09 by mlenoir           #+#    #+#             */
/*   Updated: 2016/02/19 08:21:08 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _GET_NEXT_LINE_H
# define _GET_NEXT_LINE_H

# define BUFF_SIZE 8
# define FD_MAX 999999

int		get_next_line(int const fd, char **line);
char	*ft_realloc_tmp_gnl(char *tmp);
char	*ft_realloc_buf_gnl(char *tmp, char *buf);

#endif
