# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ewatanab <ewatanab@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/22 14:35:22 by ewatanab          #+#    #+#              #
#    Updated: 2020/09/27 13:23:24 by ewatanab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c\
	  ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c\
	  ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c\
	  ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c\
	  ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c\
	  ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c\
	  ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c get_next_line.c\
	  ft_strcmp.c ft_abs.c ft_max.c ft_free.c ft_swap.c\
	  ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
	  ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
	  ft_lstmap.c ft_lstfind.c ft_lstdelif.c ft_lsttov.c
OBJ = $(SRC:%.c=%.o)
BOBJ = $(BONUS:%.c=%.o)
HEADER = libft.h
CFLAGS = -Wall -Werror -Wextra -g -O0
CC = gcc

all : $(NAME)

$(NAME) : $(OBJ)
	ar -rc $(NAME) $(OBJ)

bonus : $(BOBJ)
	ar -rc $(NAME) $(BOBJ)

clean :
	rm -f $(OBJ) $(BOBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
