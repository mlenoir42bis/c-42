/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 22:55:23 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/23 23:23:56 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_SELECT_H
# define _FT_SELECT_H

# include <dirent.h>
# include <pwd.h>
# include <grp.h>
# include <time.h>
# include <errno.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <termios.h>
# include <curses.h>
# include <term.h>
# include <signal.h>
# include <sys/ioctl.h>

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

# define T_AR_R 4414235
# define T_AR_L 4479771
# define T_AR_U 4283163
# define T_AR_B 4348699
# define T_ENT 10
# define T_SPA buf[0] == 32 && buf[1] == 91
# define T_DEL1 127
# define T_DEL2 27
# define T_ESC 27
# define T_TAB 9

typedef struct		s_lstdbl
{
	struct s_lstdbl	*next;
	struct s_lstdbl	*prev;
	void			*content;
	size_t			content_size;
	int				x;
	int				y;
	int				select;
	int				live;
}					t_lstdbl;

typedef struct		s_lstdbl_in
{
	struct s_lstdbl	*first;
	struct s_lstdbl	*last;
	int				len;
}					t_lstdbl_in;

typedef struct		s_term_live
{
	struct termios	*term_save;
	struct termios	*term_live;
	int				cursor_x;
	int				cursor_y;
	t_lstdbl_in		lst_circ;
	int				max_strlen;
	int				nb_col;
	struct winsize	ws;
}					t_term_live;

typedef struct		s_position
{
	int				x;
	int				y;
	int				i;
	int				j;
}					t_position;

t_term_live			g_term;

void				ft_lstdblinit(t_lstdbl_in *in);
t_lstdbl			*ft_lstdblnew(void const *content, size_t content_size);
int					ft_lstdblpushback_circ(t_lstdbl_in *in,
		void const *content, size_t content_size);
int					ft_lstdblpushfront_circ(t_lstdbl_in *in,
		void const *content, size_t content_size);
void				ft_lstdbldel_circ(t_lstdbl_in *lst);
void				ft_lstdbldelone(t_lstdbl_in *in, t_lstdbl *del);
int					ft_lstdblsize(t_lstdbl **root);
void				ft_lstdblprint(t_lstdbl *first);
void				ft_lstdblpopone(t_lstdbl_in *in, t_lstdbl *del);
int					ft_transform_tab_in_dblst_circ(char **arg, t_lstdbl_in *in);
void				ft_lstdblprint_circ(t_lstdbl_in in);
void				ft_lstdblprint_circ_rev(t_lstdbl_in in);

char				*ft_strnewcpy(char *str);

void				ft_err_exit(char *error);
int					ft_error(char *name_fct, char *error, char *arg);
void				ft_switch_print(t_lstdbl *elem, int mode);

int					ft_cmdgoto(int x, int y);
int					ft_cmdput(char *arg);
int					ft_getmaxlen(t_lstdbl_in in);
void				ft_getwinsize(int ac);
int					ft_outc(int c);
void				ft_print_elem_cursor(char *str, int mode);
void				ft_print_elem_cursor_reversed(char *str, int mode);
void				ft_print_elem_reversed(char *str, int mode);
void				ft_putstr_center(char *str);
void				ft_signal(void);
void				ft_stop(int ac);
void				ft_tchek_init(int ac);
int					ft_set_termattr(struct termios **term);
int					ft_get_termattr(struct termios **term);
int					ft_div_rev(void);

void				ft_switch_print(t_lstdbl *elem, int mode);
int					ft_display(void);
int					ft_display_lst(t_lstdbl_in in);

void				ft_switch_move_1col(unsigned int buf);
void				ft_switch_move_ncol(unsigned int buf);

int					ft_lst_arrow_b(void);
int					ft_lst_arrow_u(void);
int					ft_lst_arrow_r(void);
int					ft_lst_arrow_l(void);

void				ft_keep(int ac);
void				ft_clear(int ac);
void				ft_end_display(unsigned int buf);
void				ft_end(unsigned int buf);
t_position			ft_init_position(void);
void				ft_lstdblprint_circ_sep(t_lstdbl_in in, char c);
int					ft_select(char *buf, t_lstdbl_in in);
void				ft_term_init_var(char *argv[]);
t_term_live			ft_term_init(void);
int					ft_get_cursor(t_lstdbl_in in);

#endif
