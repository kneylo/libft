# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nkreter <nkreter@NOTstudent.42lausanne.ch> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/08 18:13:41 by nkreter           #+#    #+#              #
#    Updated: 2025/10/14 16:23:56 by nkreter          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# fichiers source .c de la lib 
SRC	=				ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c \
					ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c \
					ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c \
					ft_strlcat.c ft_strlen.c ft_strncmp.c ft_toupper.c \
					ft_strrchr.c ft_tolower.c ft_putchar_fd.c ft_putstr_fd.c \
					ft_putendl_fd.c ft_putnbr_fd.c ft_putchar.c ft_putstr.c \
					ft_putendl.c ft_putnbr.c ft_strrev.c ft_strcmp.c ft_strcat.c \
					ft_strcpy.c ft_memccpy.c ft_strstr.c ft_strnstr.c ft_strlcpy.c \
					ft_memcmp.c ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c \
					ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
					ft_strcapitalize.c
					
# fichiers source bonus .c
SRCBONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		   ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

# changements des .c en .o 
OBJ			=		$(SRC:.c=.o)
OBJBONUS	=		$(SRCBONUS:.c=.o)

# variables
CC			=		gcc
RM			=		rm -f
CFLAGS		=		-Wall -Wextra -Werror -I.

# commande pour créer la bibliothèque
AR = ar rcs

# Nom de la lib 
NAME		=		libft.a

# ========== REGLES ======= #

# Regle principale : "all" executee par defaut 
all:				$(NAME)

# Regle pour construire la librairie
$(NAME):	$(OBJ)
				$(AR) $(NAME) $(OBJ)

# Compilation des fichiers .o depuis les .c
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Regle bonus : ajouter les objets bonus
bonus :		$(OBJBONUS)
				$(AR) $(NAME) $(OBJBONUS)

# Supprimer les fichiers objets (.o) 
clean:
					$(RM) $(OBJ) $(OBJBONUS)
					

# Supprimer tout (objets + librairie) 
fclean:				clean
					$(RM) $(NAME)

# tout recompiler #
re:					fclean all

# cibles pour eviter les conflits de noms 
.PHONY:				all clean fclean re bonus