# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/28 18:32:10 by mlenoir           #+#    #+#              #
#    Updated: 2016/05/23 22:41:20 by mlenoir          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRC_NAME =  main.c \
			ft_lstdblinit.c \
			ft_lstdbldel_circ.c \
			ft_lstdbldelone.c \
			ft_lstdblnew.c \
			ft_lstdblpushback_circ.c \
			ft_lstdblpushfront_circ.c \
			ft_lstdblsize.c \
			ft_lstdblprint.c \
			ft_lstdblprint_circ.c \
			ft_strnewcpy.c \
			ft_transforme_tab_in_dblst_circ.c \
			ft_error.c \
			ft_err_exit.c \
			ft_cmdgoto.c \
			ft_cmdput.c \
			ft_getmaxlen.c \
			ft_getwinsize.c \
			ft_outc.c \
			ft_print.c \
			ft_putstr_center.c \
			ft_signal.c \
			ft_stop.c \
			ft_termattr.c \
			ft_tchek_init.c \
			ft_switch_print.c \
			ft_switch_move.c \
			ft_lst_arrow.c \
			ft_display.c \
			ft_display_lst.c \
			ft_div_rev.c \
			ft_end.c \
			ft_get_cursor.c \
			ft_init_position.c \
			ft_lstdblprint_circ_sep.c \
			ft_term_init.c \
			ft_select.c

# Compiler
CC = gcc

# Executable name
NAME = ./ft_select
INC_NAME = select.h
OBJ_NAME = $(SRC_NAME:.c=.o)

# Path
SRC_PATH = ./src/
INC_PATH = ./
OBJ_PATH = ./obj/

# Libft data
LIBFT_PATH = ./libft/
INC_LIBFT = $(LIBFT_PATH)includes/
LIBFT_NAME = libft.a

# Flag
FLAGS += -W -Wall -Wextra -Werror
SELECT_FLAG = -ltermcap -Incurses
LIBFT_FLAG = -L$(LIBFT_PATH) -lft

#
SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))
LIBFT = $(addprefix $(LIBFT_PATH), $(LIBFT_NAME))
INC = $(addprefix $(INC_PATH), $(INC_NAME))

all : $(NAME)

$(NAME) : $(LIBFT) $(OBJ)
	$(CC) $(LIBFT_FLAG) $(SELECT_FLAG) -o $@ $^

$(OBJ_PATH)%.o: $(SRC_PATH)%.c $(INC) $(INC_LIBFT)
	mkdir -p $(OBJ_PATH)
	$(CC) $(FLAGS) -o -I$(INC_PATH) -I$(INC_LIBFT) -o $@ -c $<

libft: $(libft)

$(LIBFT):
	make -C $(LIBFT_PATH)

clean 	:
	make -C $(LIBFT_PATH) clean
	rm -f $(OBJ)

fclean	: clean
	make -C $(LIBFT_PATH) fclean
	rm -f $(NAME)

re : fclean all
