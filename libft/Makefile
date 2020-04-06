# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jiin <jiin@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/01 00:42:17 by jiin              #+#    #+#              #
#    Updated: 2020/03/01 00:42:17 by jiin             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRCS		=	ft_atoi.c ft_isalpha.c ft_memccpy.c ft_memmove.c ft_strlcat.c ft_strnstr.c \
				ft_bzero.c ft_isascii.c ft_memchr.c ft_memset.c ft_strlcpy.c ft_strrchr.c \
				ft_calloc.c ft_isdigit.c ft_memcmp.c ft_strchr.c ft_strlen.c ft_tolower.c \
				ft_isalnum.c ft_isprint.c ft_memcpy.c ft_strdup.c ft_strncmp.c \
				ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
				ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror -c
RM			=	rm -f

OBJS		=	$(SRCS:%.c=%.o)

all			:	$(NAME)

$(NAME) 	:	$(OBJS)
	ar rc $(NAME) $(OBJS)

$(OBJS) 	:	$(SRCS)
	$(CC) $(CFLAGS) $(SRCS)

bonus 		:	fclean $(OBJS)
	ar rc $(NAME) $(OBJS)

clean		: 
	$(RM) $(OBJS)

fclean		:	clean
	$(RM) $(NAME)

re			:	fclean all