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
SRC	=				nk_atoi.c nk_bzero.c nk_isalnum.c nk_isalpha.c \
					nk_isascii.c nk_isdigit.c nk_isprint.c nk_memchr.c \
					nk_memcpy.c nk_memmove.c nk_memset.c nk_strchr.c \
					nk_strlcat.c nk_strlen.c nk_strncmp.c nk_toupper.c \
					nk_strrchr.c nk_tolower.c nk_putchar_fd.c nk_putstr_fd.c \
					nk_putendl_fd.c nk_putnbr_fd.c nk_putchar.c nk_putstr.c \
					nk_putendl.c nk_putnbr.c nk_strrev.c nk_strcmp.c nk_strcat.c \
					nk_strcpy.c nk_memccpy.c nk_strstr.c nk_strnstr.c nk_strlcpy.c \
					nk_memcmp.c nk_strdup.c nk_calloc.c nk_substr.c nk_strjoin.c \
					nk_strtrim.c nk_split.c nk_itoa.c nk_strmapi.c nk_striteri.c \
					nk_strcapitalize.c
					
# fichiers source bonus .c
SRCBONUS = nk_lstnew.c nk_lstadd_front.c nk_lstsize.c nk_lstlast.c nk_lstadd_back.c \
		   nk_lstdelone.c nk_lstclear.c nk_lstiter.c nk_lstmap.c

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