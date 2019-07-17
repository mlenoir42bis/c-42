# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/09/17 11:21:49 by mlenoir           #+#    #+#              #
#    Updated: 2015/09/24 04:33:26 by mlenoir          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
LIB = libft.a
HEADER = includes/
FLAG = -Wall -Wextra -Werror
OPTION = -c -I $(HEADER)
SRC = srcs/base/ft_strcmp.c srcs/base/ft_putnbr.c srcs/base/ft_putchar.c srcs/base/ft_putstr.c srcs/base/ft_strlen.c srcs/base/ft_strcpy.c srcs/base/ft_atoi.c srcs/base/ft_strcat.c srcs/ft_treat_list.c srcs/ft_set_data_file.c srcs/ft_print_list.c srcs/ft_create_struct.c srcs/ft_transform_list_str.c srcs/ft_check_list.c srcs/ft_treat_file.c srcs/ft_treat_tab.c srcs/resolv.c
OBJ = ft_strcmp.o ft_putnbr.o ft_putchar.o ft_putstr.o ft_strlen.o ft_strlen.o ft_strcpy.o ft_atoi.o ft_strcat.o ft_treat_list.o ft_set_data_file.o ft_print_list.o ft_create_struct.o ft_transform_list_str.o ft_check_list.o ft_treat_file.o ft_treat_tab.o resolv.o

all :
	gcc $(FLAG) $(OPTION) $(SRC)
	ar rc $(LIB) $(OBJ)
	gcc -o $(NAME) main.c -L. -lft
clean :
		rm -f $(OBJ)

fclean : clean
		 rm -f $(NAME) $(LIB)

re : fclean all
