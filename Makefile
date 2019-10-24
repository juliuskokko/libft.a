# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 09:18:18 by jkokko            #+#    #+#              #
#    Updated: 2019/10/18 17:17:03 by jkokko           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCE = ft_putchar.c ft_putstr.c ft_putnbr.c ft_putendl.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putnbr_fd.c ft_putendl_fd.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_isdigit.c \
		ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strcat.c \
		ft_strncat.c ft_strstr.c ft_strnstr.c ft_strlcat.c ft_memalloc.c ft_lstnew.c ft_lstdelone.c \
		ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_bzero.c ft_makefit.c ft_memset.c


OBJECTS = ft_putchar.o ft_putstr.o ft_putnbr.o ft_putendl.o ft_putchar_fd.o ft_putstr_fd.o \
		ft_putnbr_fd.o ft_putendl_fd.o ft_strlen.o ft_strdup.o ft_strcpy.o ft_strncpy.o ft_isdigit.o \
		ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o ft_strcat.o \
		ft_strncat.o ft_strstr.o ft_strnstr.o ft_strlcat.o ft_memalloc.o ft_lstnew.o ft_lstdelone.o \
		ft_lstdel.o ft_lstadd.o ft_lstiter.o ft_lstmap.o ft_bzero.o ft_makefit.o ft_memset.o


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
