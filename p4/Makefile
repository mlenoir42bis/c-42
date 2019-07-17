# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/28 18:32:10 by mlenoir           #+#    #+#              #
#    Updated: 2016/02/28 22:08:23 by pbenoit          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ./src/ft_display_menu.c \
	   ./src/ft_display_tab.c \
	   ./src/ft_init_tab.c \
	   ./src/ft_listen.c \
	   ./src/ft_tchek_listen.c \
	   ./src/ft_listen_menu.c \
	   ./src/ft_begin.c \
	   ./src/ft_tchek_end_game.c \
	   ./src/ft_listen_shot.c \
	   ./src/ft_add_shot.c \
	   ./src/ft_tchek_win.c \
	   ./src/ft_tchek_win_diag_drt.c \
	   ./src/ft_tchek_win_horiz.c \
	   ./src/ft_tchek_win_vert.c \
	   ./src/ft_tchek_win_diag_gch.c \
	   ./src/ft_begin_jcj.c \
	   ./src/ft_score_horiz.c \
	   ./src/ft_score_vert.c \
	   ./src/ft_score_diag_gch.c \
	   ./src/ft_score_diag_drt.c \
	   ./src/ft_begin_jcia.c \
	   ./src/ft_ia_play.c

# Compiler
CC = gcc

# Executable name
NAME = ./puissance4
MAIN = ./main.c
OBJS = $(SRCS:.c=.o)

#
PATHHEAD = -I./
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
