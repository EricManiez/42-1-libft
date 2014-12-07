# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emaniez <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/04 16:09:39 by emaniez           #+#    #+#              #
#    Updated: 2014/12/07 12:57:09 by emaniez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, $(NAME), $(LIB) clean, fclean, re, norme

SRC_PATH = ./src/

SRC_PATH = ./src/

SRC_NAME = ft_isdigit.c \
		   ft_memchr.c \
		   ft_pow.c \
		   ft_putstr.c \
		   ft_strdel.c \
		   ft_strlen.c \
		   ft_strnew.c \
		   ft_tolower.c \
		   ft_islower.c \
		   ft_memcmp.c \
		   ft_putchar.c \
		   ft_putstr_fd.c \
		   ft_strdup.c \
		   ft_strmap.c \
		   ft_strnstr.c \
		   ft_toupper.c \
		   ft_atoi.c \
		   ft_isprint.c\
		   ft_memcpy.c \
		   ft_putchar_fd.c \
		   ft_strcat.c \
		   ft_strequ.c \
		   ft_strmapi.c \
		   ft_strrchr.c \
		   ft_bzero.c \
		   ft_isupper.c \
		   ft_memdel.c \
		   ft_putendl.c \
		   ft_strchr.c \
		   ft_striter.c\
		   ft_strncat.c \
		   ft_strsplit.c \
		   ft_isalnum.c \
		   ft_itoa.c \
		   ft_memmove.c \
		   ft_putendl_fd.c \
		   ft_strclr.c \
		   ft_striteri.c \
		   ft_strncmp.c \
		   ft_strstr.c \
		   ft_isalpha.c \
		   ft_memalloc.c \
		   ft_memset.c \
		   ft_putnbr.c \
		   ft_strcmp.c \
		   ft_strjoin.c \
		   ft_strncpy.c \
		   ft_strsub.c \
		   ft_isascii.c \
		   ft_memccpy.c \
		   ft_numlen.c \
		   ft_putnbr_fd.c \
		   ft_strcpy.c \
		   ft_strlcat.c \
		   ft_strnequ.c \
		   ft_strtrim.c \
		   ft_isspace.c \
		   ft_lstnew.c \
		   ft_lstdelone.c \
		   ft_lstdel.c \
		   ft_lstadd.c \
		   ft_lstiter.c \
		   ft_lstmap.c \

OBJ_PATH = ./obj/
INC_PATH = ./includes/

NAME = libft.a

CC = gcc
FLAGS = -Werror -Wall -Wextra

OBJ_NAME = $(SRC_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))

all: $(NAME)

$(NAME): $(OBJ)
	@ar -rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "$(NAME) : library has been compiled successfully"

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || echo '' > /dev/null
	@$(CC) $(FLAGS) -I$(INC_PATH) -o $@ -c $<

clean:
	@rm -f $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || echo '' > /dev/null
	@echo "$(NAME) : object files have been removed successfully"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) : executable file has been removed succesully"

re: fclean all

norme:
	@norminette $(SRC)
	@norminette $(INC_PATH)*.h
