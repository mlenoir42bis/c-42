# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/28 18:32:10 by mlenoir           #+#    #+#              #
#    Updated: 2016/01/08 18:09:15 by mlenoir          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	./src/ft_alpha_map.c \
		./src/ft_delete_on_map.c \
		./src/ft_error.c \
		./src/ft_read_file.c \
		./src/ft_realloc_strchr.c \
		./src/ft_resize_map.c \
		./src/ft_resolv.c \
		./src/ft_tchek_elem_on_pos.c \
		./src/ft_treat_buf.c \
		./src/ft_treat_elem.c \
		./src/ft_treat_file.c \
		./src/ft_write_on_map.c \
		./src/read_map.c \
		./src/check/check_buf.c \
		./src/check/check_elem.c \
		./src/struct/ft_create_struct_elem.c \
		./src/struct/ft_create_struct_map.c \
		./src/struct/ft_free_elem.c \
		./src/struct/ft_free_map.c

# Compiler
CC = gcc

# Executable name
NAME = ./fillit
MAIN = ./main.c
OBJS = $(SRCS:.c=.o)

#
PATHHEAD = -I./includes/
FLAGS += -W -Wall -Wextra -Werror
LIB = -L./lib/ -lft

#
LFTDIR = ./lib/libft/
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

re :	fclean all
