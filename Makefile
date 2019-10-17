# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 09:18:18 by jkokko            #+#    #+#              #
#    Updated: 2019/10/17 09:18:18 by jkokko           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCE = ft_putchar.c ft_putstr.c ft_putnbr.c ft_putendl.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putnbr_fd.c ft_putendl_fd.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_isdigit.c \
		ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c


OBJECTS = ft_putchar.o ft_putstr.o ft_putnbr.o ft_putendl.o ft_putchar_fd.o ft_putstr_fd.o \
		ft_putnbr_fd.o ft_putendl_fd.o ft_strlen.o ft_strdup.o ft_strcpy.o ft_strncpy.o ft_isdigit.o \
		ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o


FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(SOURCE) libft.h
	gcc $(FLAGS) -c $(SOURCE) -I ./
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

test:
	gcc $(FLAGS) test.c libft.a

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
