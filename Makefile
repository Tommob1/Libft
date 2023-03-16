# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: btomlins <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/14 11:43:16 by btomlins          #+#    #+#              #
#    Updated: 2023/03/15 09:34:01 by btomlins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
FLAG = -Wall -Wextra -Werror

CC = gcc

NAME = libft.a

SOURCE = ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memcpy.c \
		ft_memset.c \
		ft_memmove.c \
		ft_strchr.c \
		ft_strlen.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strnstr.c 

OBJECTS = $(SOURCE:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(FLAG) -o $@ -c $<

$(NAME):	$(OBJECTS)
					#gcc $(FLAGS) -c $(SOURCE) -I./#
					ar src  $(NAME) $(OBJECTS)

clean:				
					rm -f $(OBJECTS)

fclean:		clean	
					rm -f $(NAME)

re:			fclean all