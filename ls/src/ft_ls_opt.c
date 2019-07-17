/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls_opt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/13 04:33:06 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/03 20:55:03 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../ft_ls.h"

static void			ft_err_ls_opt(t_ls_opt *opt, char *s)
{
	ft_printf("ls : illegal option -- %s\n", s);
	ft_printf("usage: ls [-lRart] [file ...]\n");
	free(opt);
}

static int			ft_is_ls_opt(char c)
{
	int				i;

	i = -1;
	while (LSOPT[++i])
		if (LSOPT[i] == c)
			return (1);
	return (0);
}

static t_ls_opt		*ft_switch_set_ls_opt(t_ls_opt *opt, char c)
{
	if (c == 'l')
		opt->l = 1;
	if (c == 'R')
		opt->rec = 1;
	if (c == 'a')
		opt->a = 1;
	if (c == 'r')
		opt->r = 1;
	if (c == 't')
		opt->t = 1;
	if (c == '1')
		opt->one = 1;
	return (opt);
}

static t_ls_opt		*ft_init_opt(void)
{
	t_ls_opt		*opt;

	if (!(opt = (t_ls_opt *)malloc(sizeof(t_ls_opt))))
		return (0);
	opt->l = 0;
	opt->rec = 0;
	opt->a = 0;
	opt->r = 0;
	opt->t = 0;
	opt->one = 0;
	return (opt);
}

t_ls_opt			*ft_ls_opt(int argc, char *argv[])
{
	t_ls_opt		*opt;
	int				i;
	int				j;

	i = 0;
	if (!(opt = ft_init_opt()))
		return (0);
	while (++i < argc && argv[i][0] == '-' && argv[i][1] != '\0')
	{
		j = 0;
		while (argv[i][++j])
		{
			if (!ft_is_ls_opt(argv[i][j]))
			{
				ft_err_ls_opt(opt, argv[i]);
				return (0);
			}
			else
				opt = ft_switch_set_ls_opt(opt, argv[i][j]);

		}
	}
	return (opt);
}
