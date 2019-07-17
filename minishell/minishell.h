/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 14:22:59 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/27 14:23:16 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MINISHELL_H
# define _MINISHELL_H

# include <dirent.h>
# include <pwd.h>
# include <grp.h>
# include <time.h>
# include <errno.h>
# include <sys/types.h>
# include <sys/stat.h>

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

# define ENVOPT     "-iu"

typedef struct		s_lstdbl
{
	struct s_lstdbl	*next;
	struct s_lstdbl	*prev;
	void			*content;
	size_t			content_size;
}					t_lstdbl;

typedef struct		s_lstdbl_in
{
	struct s_lstdbl	*first;
	struct s_lstdbl	*last;
}					t_lstdbl_in;

typedef struct		s_opt_env
{
	int				unset;
	int				unset_all;
	int				opt_null;
	int				nb_arg;
	int				err;
}					t_opt_env;

void				ft_lstdblinit(t_lstdbl_in *in);
t_lstdbl			*ft_lstdblnew(void const *content, size_t content_size);
int					ft_lstdblpushback(t_lstdbl_in *in,
		void const *content, size_t content_size);
int					ft_lstdblpushfront(t_lstdbl_in *in,
		void const *content, size_t content_size);
void				ft_lstdbldel(t_lstdbl_in *lst);
void				ft_lstdbldelone(t_lstdbl_in *in, t_lstdbl *del);
int					ft_lstdblsize(t_lstdbl **root);
void				ft_lstdbldelhidden(t_lstdbl_in *in);
void				ft_lstdblprint(t_lstdbl *first);
void				ft_lstdblpopone(t_lstdbl_in *in, t_lstdbl *del);
int					ft_transform_tab_in_dblst(char **tab, t_lstdbl_in *in);
char				*ft_strnewcpy(char *str);

int					ft_unsetenv(t_lstdbl_in *in, char *name);
int					ft_setenv(t_lstdbl_in *in, char *name, char *value);
char				**ft_getsplitenv(char *env[], char *elem);
char				**ft_getsplitarg(char *line);
char				*ft_getenv(char *env[], char *elem);
int					ft_env(t_lstdbl_in *in,
		char **arg, char **path, char **env);

void				ft_err_exit(char *error);
int					ft_error(char *name_fct, char *error, char *arg);
void				ft_exit(char **path, char **arg, t_lstdbl_in *in);

int					ft_cd(char **env, char **arg);
int					ft_execv_arg(char **path, char **arg);
int					ft_treat_arg(char **env,
		char **path, char **arg, t_lstdbl_in *in);
int					ft_tablen(char **tab);
char				*ft_tchek_access(char **path, char *name);
int					ft_switch_builtin(char **env, char **path,
		char **arg, t_lstdbl_in *in);

void				ft_msg_welcome(void);
t_opt_env			ft_tchek_opt_env(char *arg[]);
#endif
