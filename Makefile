# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wnocchi <wnocchi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/20 16:51:19 by wnocchi           #+#    #+#              #
#    Updated: 2023/11/16 16:46:21 by wnocchi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
SRCS = ft_isalpha.c ft_isprint.c ft_memset.c ft_strlcpy.c ft_bzero.c ft_isascii.c ft_memcpy.c ft_strchr.c ft_strlen.c ft_toupper.c ft_tolower.c ft_isalnum.c ft_isdigit.c ft_memmove.c ft_strlcat.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c 
SRCS_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c

OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)
SRC_TEST = main.c
NAME_TEST = tests
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS) $(SRCS_BONUS)
	cc -nostartfiles -shared -o libft.so $(OBJS) $(OBJS_BONUS)

$(NAME): $(OBJS)
	ar r $(NAME) $(OBJS)

bonus: $(OBJS_BONUS) $(OBJS)
	ar r $(NAME) $(OBJS_BONUS) $(OBJS)
	
clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

test: $(NAME)
	@echo Running tests...
	@$(CC) $(CFLAGS) $(SRC_TEST) $(NAME) -o $(NAME_TEST)
	@./$(NAME_TEST)
	
fclean: clean
	$(RM) $(NAME) $(NAME_TEST)

re: fclean all
