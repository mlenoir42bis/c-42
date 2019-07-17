/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 04:54:03 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/22 03:52:38 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/includes/libft.h"
#include "./ft_ls.h"

void			ft_treat_arg(t_ls_opt *opt, t_lstdbl *lst)
{
	t_lstdbl_in	in;
	t_lstdbl	*tmp;

	tmp = lst;
	while (tmp)
	{
		ft_printf("%s:\n", tmp->content);
		if (opt->rec)
			ft_recursif(opt, tmp->content);
		else
		{
			ft_read_dir(&in, tmp->content);
			if (in.first)
				in = ft_display(in, opt);
			ft_lstdbldel(&in);
			ft_putchar('\n');
		}
		tmp = tmp->next;
	}
}

void			ft_treat_current(t_ls_opt *opt)
{
	t_lstdbl_in	in;

	if (opt->rec)
		ft_recursif(opt, "./");
	else
	{
		ft_read_dir(&in, "./");
		if (in.first)
			in = ft_display(in, opt);
		ft_lstdbldel(&in);
	}
}

int				main(int argc, char *argv[])
{
//	t_ls_opt		*opt;
	t_lstdbl_in		arg;
//	int				i;

	if (argc && argv)
		;
	arg = ft_transform_argv_in_dblst(argv);
	ft_lstdblprint_rev(arg.last);
	/*
	if (!(opt = ft_ls_opt(argc, argv)))
		return (0);
	i = 0;
	while (++i < argc && argv[i][0] == '-' && argv[i][1] != '\0')
		;
	if (i < argc)
	{
		arg = ft_set_lst_arg(argc, argv);
		ft_treat_arg(opt, arg.first);
		ft_lstdbldel(&arg);
	}
	else
		ft_treat_current(opt);
	free(opt);
	*/
	return (0);
}
