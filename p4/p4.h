/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p4.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/24 22:32:31 by mlenoir           #+#    #+#             */
/*   Updated: 2016/02/28 21:28:03 by pbenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _P4_H
# define _P4_H

# include <time.h>

typedef struct		s_p4
{
	char			**tab;
	int				col;
	int				lgn;
	int				mode;
	int				player;
	int				score;
	int				must_score;
	int				must_shot;
	int				win;
	int				end;
	int				mx_lgn;
	int				mx_col;
	int				i;
	int				j;
}					t_p4;

void				ft_display_menu(void);
void				ft_display_tab(t_p4 *p4);

void				ft_free_tab2d(char **tab, int i);
char				**ft_init_tab(int lgn, int col);
t_p4				*ft_init(char *lgn, char *col);

void				ft_begin(t_p4 *p4);
void				ft_begin_jcj(t_p4 *p4);

t_p4				*ft_kill_shot(t_p4 *p4);
int					ft_score_ia(t_p4 *p4);
t_p4				*ft_best_possible(t_p4 *p4);
t_p4				*ft_ia_play(t_p4 *p4);
void				ft_begin_jcia(t_p4 *p4);

t_p4				*ft_listen(t_p4 *p4, int mode);
t_p4				*ft_listen_menu(t_p4 *p4);
t_p4				*ft_listen_shot(t_p4 *p4);

t_p4				*ft_add_shot(t_p4 *p4);

int					ft_tchek_data_menu(t_p4 *p4);
int					ft_tchek_data_col(t_p4 *p4);
int					ft_tchek_valid_shot(t_p4 *p4);
t_p4				*ft_tchek_end_game(t_p4 *p4);
int					ft_tchek_arg(char *lgn, char *col);

t_p4				*ft_tchek_win(t_p4 *p4);
t_p4				*ft_tchek_win_vert(t_p4 *p4);
t_p4				*ft_tchek_win_horiz(t_p4 *p4);
t_p4				*ft_tchek_win_diag_gch(t_p4 *p4);
t_p4				*ft_tchek_win_diag_drt(t_p4 *p4);

t_p4				*ft_score(t_p4 *p4);
int					ft_score_vert(t_p4 *p4);
int					ft_score_horiz(t_p4 *p4, int mode);
int					ft_score_diag_gch(t_p4 *p4, int mode);
int					ft_score_diag_drt(t_p4 *p4, int mode);

#endif
