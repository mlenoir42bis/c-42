# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/28 18:32:10 by mlenoir           #+#    #+#              #
#    Updated: 2016/05/24 04:18:17 by mlenoir          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ./src/ft_lstdblinit.c \
	   ./src/ft_lstdbldel.c \
	   ./src/ft_lstdbldelone.c \
	   ./src/ft_lstdblnew.c \
	   ./src/ft_lstdblpushback.c \
	   ./src/ft_lstdblsize.c \
	   ./src/ft_lstdbldelhidden.c \
	   ./src/ft_lstdblprint.c \
	   ./src/ft_strnewcpy.c \
	   ./src/ft_env.c \
	   ./src/ft_error.c \
	   ./src/ft_exit.c \
	   ./src/ft_getenv.c \
	   ./src/ft_getsplitarg.c \
	   ./src/ft_getsplitenv.c \
	   ./src/ft_setenv.c \
	   ./src/ft_unsetenv.c \
	   ./src/ft_transforme_tab_in_dblst.c \
	   ./src/ft_builtin.c \
	   ./src/ft_cd.c \
	   ./src/ft_err_exit.c \
	   ./src/ft_execv_arg.c \
	   ./src/ft_msg_welcome.c \
	   ./src/ft_tablen.c \
	   ./src/ft_tchek_access.c \
	   ./src/ft_treat_arg.c \
	   ./src/ft_tchek_opt_env.c

# Compiler
CC = gcc

# Executable name
NAME = ./minishell
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
