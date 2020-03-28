# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jiin <jiin@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/03 22:27:50 by bsouchet          #+#    #+#              #
#    Updated: 2020/03/28 23:44:41 by jiin             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C = clang

NAME = libft.a

FLAGS = -Wall -Wextra -Werror -O2

HEADER = libft.h

LIBFILES = $(SRC:.c=.o)

SRC = ft_atoi.c \
	  ft_bzero.c \
	  ft_memchr.c \
	  ft_memcpy.c \
	  ft_memset.c \
	  ft_pow.c \
	  ft_strchr.c \
	  ft_strchri.c \
	  ft_strlen.c \
	  ft_strncmp.c \
	  ft_wcharlen.c \
	  ft_wstrlen.c

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) -c $(SRC) -include $(HEADER)
	@ar rc $(NAME) $(LIBFILES)
	@ranlib $(NAME)

clean:
	@rm -f $(LIBFILES)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
