/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberedda <mberedda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/19 15:10:24 by mberedda          #+#    #+#             */
/*   Updated: 2015/09/24 22:55:45 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_FILE_H
# define DISPLAY_FILE_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# define BUF_SIZE 1

typedef struct		s_data
{
	int				**tabi;
	char			**tab;
	int				width;
	int				height;
	char			c_null;
	char			c_block;
	char			c_full;
}					t_data;

typedef struct		s_list
{
	struct s_list	*next;
	char			data;
}					t_list;

typedef struct 		s_solution{

	int 			x;
	int 			y;
	int 			length;

}					t_solution;

typedef struct 		s_bsq
{
	t_data	 		*data;
	t_solution 		*solution;
}					t_bsq;

int				get_int(char c, t_data *data);
char 			get_char(int value, t_bsq *bsq);
int 			resolve(t_bsq **ptr);
int 			get_square(t_bsq *ptr, int x, int y);
t_bsq 			*init_bsq(t_data *data);
/*
 **base lib
*/
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int n);
int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
int		ft_atoi(char *nbr);
char	*ft_strcat(char *dest, char *src);
int		ft_strcmp(char *s1, char *s2);
/*
 **ft_treat_list.c
*/
void	ft_list_push_back(t_list **root, char data);
int		ft_list_size(t_list **root);
int		ft_count_size_line_list(t_list *list);
void	ft_list_clear(t_list **begin_list);
void	ft_list_clear_line(t_list **begin_list);
/*
 **ft_print_list.c
*/
void	ft_print_list(t_list *list);
void	ft_print_line(t_list *list);
/*
 **ft_create_struct.c
*/
t_data	*ft_create_struct_data_file(t_list **list);
t_list	*ft_create_elem(char data);
/*
 **ft_check_list.c
*/
int		ft_check_data(t_list *list, t_data *data);
int		ft_check_lenght_line(t_list *list, t_data *data);
int		ft_switch_check(t_list *list, t_data *data);
/*
 **ft_set_data_file.c
*/
int		ft_count_size_line_list(t_list *list);
void	ft_treat_data_list(t_list *list);
t_data	*ft_set_data_map(t_list *list, t_data *data);
t_data	*ft_set_height_map(t_list *list, t_data *data);
int		ft_init_check_lenght_line(t_list *list, t_data *data);
int		ft_init_check_data_file(t_list *list, t_data *data);
/*
 **ft_treat_file.c
*/
char	*ft_create_str_line(t_list *list, t_data *data);
char	**ft_create_tab_src(t_list *list, t_data *data);
void	ft_treat_file(int argc, char *argv[]);
void	ft_open_file(char *argv[], int i);
/*
 **ft_treat_tab.c
*/
void	ft_display_tab(t_data *data);
void	print(t_bsq *bsq);
void	ft_display_tab_int(t_data *data);
/*
 **ft_transform_list.c
*/
int		**ft_create_tab_int(t_list *list, t_data *data);
int		*ft_create_int_line(t_list *list, t_data *data);
#endif
