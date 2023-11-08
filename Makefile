# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wnocchi <wnocchi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/20 16:51:19 by wnocchi           #+#    #+#              #
#    Updated: 2023/11/08 10:44:28 by wnocchi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
INCLUDE = libft.h
SRCS = ft_isalpha.c ft_isprint.c ft_memset.c ft_strlcpy.c ft_tolower.c ft_bzero.c ft_isascii.c ft_memcpy.c ft_strchr.c ft_strlen.c ft_toupper.c ft_isalnum.c ft_isdigit.c ft_memmove.c ft_strlcat.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar r $(NAME) $(OBJS)
	
clean:
	$(RM) $(OBJS)

test:
	echo $(OBJS)
	
fclean: clean
	$(RM) $(NAME)

re: fclean all
