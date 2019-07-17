/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 06:13:09 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/22 03:50:08 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_LS_H
# define _FT_LS_H

# include <dirent.h>
# include <pwd.h>
# include <grp.h>
# include <time.h>
# include <errno.h>
# include <sys/types.h>
# include <sys/stat.h>

# define LSOPT      "-lRart1"
# define C_NONE     "\033[0m"
# define C_BOLD     "\033[1m"
# define C_BLACK    "\033[30m"
# define C_RED      "\033[31m"
# define C_GREEN    "\033[32m"
# define C_BROWN    "\033[33m"
# define C_BLUE     "\033[34m"
# define C_MAGENTA  "\033[35m"
# define C_CYAN     "\033[36m"
# define C_GRAY     "\033[37m"

typedef struct		s_ls_size
{
	int				size_nlink;
	int				size_size;
	int				size_use;
	int				size_grp;
	int				minor;
	int				major;
	int				spepres;
}					t_ls_size;

typedef struct		s_lstdbl
{
	struct s_lstdbl	*next;
	struct s_lstdbl	*prev;
	void			*content;
	size_t			content_size;
	struct stat		st;
	struct passwd	*ps;
	struct group	*gr;
	char			*path;
}					t_lstdbl;

typedef struct		s_lstdbl_in
{
	struct s_lstdbl	*first;
	struct s_lstdbl	*last;
}					t_lstdbl_in;

typedef struct		s_ls_opt
{
	int				l;
	int				rec;
	int				a;
	int				r;
	int				t;
	int				one;
}					t_ls_opt;

void				ft_lstdblinit(t_lstdbl_in *in);
t_lstdbl			*ft_lstdblnew(void const *content, size_t content_size);
int					ft_lstdblpushback(t_lstdbl_in *in,
		void const *content, size_t content_size);
int					ft_lstdblpushfront(t_lstdbl_in *in,
		void const *content, size_t content_size);
void				ft_lstdbldel(t_lstdbl_in *lst);
void				ft_lstdbldelone(t_lstdbl_in *in, t_lstdbl *del);
int					ft_lstdblsize(t_lstdbl **root);
t_lstdbl_in			ft_lstdblsort_asc(t_lstdbl_in *in);
t_lstdbl_in			ft_lstdblsort_desc(t_lstdbl_in *in);
t_lstdbl_in			ft_lstdblsort_ctime(t_lstdbl_in *in);
t_lstdbl_in			ft_lstdblsort_ctime_reverse(t_lstdbl_in *in);
void				ft_lstdbldelhidden(t_lstdbl_in *in);
void				ft_lstdblprint(t_lstdbl *first);
void				ft_lstdblpopone(t_lstdbl_in *in, t_lstdbl *del);
t_lstdbl_in			ft_transform_argv_in_dblst(char **tab);
char				*ft_strnewcpy(char *str);
int					ft_read_dir(t_lstdbl_in *lst, char *path);
t_ls_opt			*ft_ls_opt(int argc, char *argv[]);
t_lstdbl_in			ft_switch_sort(t_lstdbl_in in, t_ls_opt *opt);
t_lstdbl_in			ft_display(t_lstdbl_in in, t_ls_opt *opt);
int					ft_print_l(t_lstdbl_in in);
int					ft_print_toto(t_lstdbl_in in);
void				ft_print_pass(t_lstdbl *elem, t_ls_size *size);
void				ft_print_size(t_lstdbl *elem, t_ls_size *size);
void				ft_print_permission(struct stat st);
void				ft_print_date(struct stat st);
t_ls_size			*ft_init_size(t_lstdbl_in lst);
int					ft_init_size_size(t_lstdbl_in lst);
int					ft_init_size_nlink(t_lstdbl_in lst);
int					ft_init_size_minor(t_lstdbl_in lst);
int					ft_init_size_major(t_lstdbl_in lst);
int					ft_is_spefile(t_lstdbl_in lst);
int					ft_init_size_grp(t_lstdbl_in lst);
int					ft_init_size_use(t_lstdbl_in lst);
int					ft_recursif(t_ls_opt *opt, char *name);
char				*ft_n_path(char *path, char *name);
t_lstdbl_in			ft_set_lst_arg(int argc, char *argv[]);
void			ft_lstdblprint_rev(t_lstdbl *lst);
#endif
