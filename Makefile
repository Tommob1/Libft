# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: btomlins <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/14 11:43:16 by btomlins          #+#    #+#              #
#    Updated: 2023/03/14 12:19:41 by btomlins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Werror -Wextra
COMP = gcc
NAME = libft.a
SOURCE = ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strchr.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strrchr.c \
OBJECT = $(SOURCE:.c=.o)

all: $(NAME)

%.o: %.c
	$(COMP) $(FLAGS) -o $@ -c $<

$(NAME):	$(OBJECT)
				ar -src $(NAME) $(OBJECT)

clean:
				rm -f $(OBJECT)

fclean:		clean
				rm -f $(NAME)

re: 		fclean all
