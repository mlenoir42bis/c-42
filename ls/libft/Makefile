# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlenoir <mlenoir@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/28 18:32:10 by mlenoir           #+#    #+#              #
#    Updated: 2016/03/15 19:51:33 by mlenoir          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	ft_bzero.c \
		ft_memset.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strdup.c \
		ft_strrev.c \
		ft_strcpy.c \
		ft_strncpy.c \
		ft_strcat.c \
		ft_strncat.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strstr.c \
		ft_strnstr.c \
		ft_strcmp.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_itoa.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putendl.c \
		ft_putnbr.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_memalloc.c \
		ft_memdel.c \
		ft_strnew.c \
		ft_strdel.c \
		ft_realloc.c \
		ft_strclr.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_strjoin.c \
		ft_strjoinf.c \
		ft_strsub.c \
		ft_strtrim.c \
		ft_strsplit.c \
		ft_freetab.c \
		ft_lstnew.c \
		ft_lstdelone.c \
		ft_lstdel.c \
		ft_lstadd.c \
		ft_lstaddback.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_lstpushback.c \
		ft_lstsize.c \
		ft_printlst.c \
		ft_printf.c \
		ft_printstr.c \
		ft_printchar.c \
		ft_printnbr.c \
		ft_lst_strsplit.c \
		ft_strndup.c \
		ft_intlen.c \
		ft_get_line.c \
		get_next_line.c \
		ft_putstrn.c \
		ft_putcharn.c

# Compiler
CC = gcc
RM = rm -rf

# Executable name
NAME = libft.a
OBJS = $(SRCS:.c=.o)

PATHHEAD = -I./includes
FLAGS += -W -Wall -Wextra -Werror -ansi
LIB = -L. -lft

all : $(NAME)

$(NAME) :
	$(CC) -c $(FLAGS) $(SRCS) $(PATHHEAD)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean :
	$(RM) $(OBJS)
			
fclean : clean
	$(RM) $(NAME)

re : fclean all
