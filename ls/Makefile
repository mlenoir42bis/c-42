# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/28 18:32:10 by mlenoir           #+#    #+#              #
#    Updated: 2016/05/03 18:38:44 by mlenoir          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ./src/ft_lstdblinit.c \
	   ./src/ft_lstdbldel.c \
	   ./src/ft_lstdbldelone.c \
	   ./src/ft_lstdblnew.c \
	   ./src/ft_lstdblpushback.c \
	   ./src/ft_lstdblsize.c \
	   ./src/ft_lstdblsort_asc.c \
	   ./src/ft_lstdblsort_desc.c \
	   ./src/ft_lstdblsort_ctime.c \
	   ./src/ft_lstdbldelhidden.c \
	   ./src/ft_lstdblprint.c \
	   ./src/ft_strnewcpy.c \
	   ./src/ft_read_dir.c \
	   ./src/ft_switch_sort.c \
	   ./src/ft_ls_opt.c \
	   ./src/ft_display.c \
	   ./src/ft_print_l.c \
	   ./src/ft_print_l_2.c \
	   ./src/ft_recursif.c \
	   ./src/ft_init_size.c \
	   ./src/ft_init_size_2.c \
	   ./src/ft_n_path.c \
	   ./src/ft_lstdblpopone.c \
	   ./src/ft_transforme_argv_in_dblst.c \
	   ./src/ft_set_lst_arg.c \
	   ./src/ft_print_permission.c

# Compiler
CC = gcc

# Executable name
NAME = ./ft_ls
MAIN = ./main.c
OBJS = $(SRCS:.c=.o)

#
PATHHEAD = -I./
PATHLIBFT = -I./libft/include/
FLAGS += -W -Wall -Wextra -Werror
LIB = -L./libft/ -lft

#
LFTDIR = ./libft/
LFT = $(LFT_DIR)libft.a

all : $(NAME)

$(NAME) : $(LFT)
	$(CC) $(FLAGS) -o $(NAME) $(MAIN) $(SRCS) $(PATHHEAD) $(LIB)

$(LFT):
	make -C $(LFTDIR)

clean 	:
	rm -rf $(NAME)

fclean	: clean
	make fclean -C $(LFTDIR)

re : fclean all
