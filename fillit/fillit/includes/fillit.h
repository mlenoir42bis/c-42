/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 15:47:58 by mlenoir           #+#    #+#             */
/*   Updated: 2016/01/08 18:00:34 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FILLIT_H
# define _FILLIT_H

# define SIZE_MAP 21
# define SIZE_MAX_MAP 26
# define SIZE_SPACE 1
# define SIZE_LGN 4

typedef struct		s_map
{
	char			**map;
	size_t			size_map;
	size_t			x;
	size_t			y;
	size_t			ispos;
}					t_map;

typedef struct		s_elem
{
	char			tab[27][5][5];
	char			pos[26][4][2];
	size_t			nb_elem;
	size_t			elem_n;
}					t_elem;

t_elem				*ft_create_struct_elem(void);
t_elem				*ft_free_elem(t_elem *elem);
int					ft_error(t_elem *elem, char *error);
t_elem				*ft_treat_file(char *argv[]);
t_elem				*ft_read_file(int const fd);
t_elem				*ft_treat_buf(char *buf, t_elem *elem);
int					check_buf(char *buf, int ret);
char				*ft_realloc_strchr(char *tmp, char c);
int					check_elem(t_elem *elem);
t_elem				*ft_treat_elem(t_elem *elem);
t_map				*ft_create_struct_map(size_t n);
char				**ft_create_map(size_t n);
t_map				*ft_resize_map(t_map *map, size_t n);
t_map				*ft_free_map(t_map *map);
int					ft_tchek_elem_on_pos(t_map *map, t_elem *elem);
t_map				*ft_write_on_map(t_map *map, t_elem *elem);
t_map				*ft_delete_on_map(t_map *map, size_t n);
t_map				*ft_update_x_y(t_map *map, size_t i, size_t j);
t_map				*ft_resolv(t_elem *elem, t_map *map);
void				ft_read_nelem(char ***map, size_t n);
int					ft_display_map(char **map, int n);
char				ft_alpha_map(int n);
#endif
