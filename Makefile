# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/08 18:13:41 by nkreter           #+#    #+#              #
#    Updated: 2026/09/09 05:21:06 by nkreter          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	=				ft_putchar.c ft_putstr.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
					ft_isdigit.c ft_isprint.c ft_atoi.c ft_bzero.c ft_calloc.c \
					ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
					ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
					ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c \

OBJ			=		$(SRC:.c=.o)

CC			=		gcc
RM			=		rm -f
CFLAGS		=		-Wall -Wextra -Werror -I.

AR = ar rcs

NAME		=		libft.a

all:				$(NAME)

$(NAME):	$(OBJ)
				$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
					$(RM) $(OBJ)
					
fclean:				clean
					$(RM) $(NAME)

re:					fclean all

.PHONY:				all clean fclean re