/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_lst_arg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlenoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/03 15:40:03 by mlenoir           #+#    #+#             */
/*   Updated: 2016/05/03 20:57:24 by mlenoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../ft_ls.h"

t_lstdbl_in		ft_set_lst_arg(int argc, char *argv[])
{
	t_lstdbl_in in;
	int			i;

	in = ft_transform_argv_in_dblst(argv);
	ft_lstdbldelone(&in, in.first);
	i = 0;
	while (++i < argc && argv[i][0] == '-' && argv[i][1] != '\0')
		ft_lstdbldelone(&in, in.first);
	in = ft_lstdblsort_desc(&in);
	return (in);
}
