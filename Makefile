# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mminasya <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/25 18:08:48 by mminasya          #+#    #+#              #
#    Updated: 2025/02/02 23:17:30 by mminasya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
SRS =	ft_memcmp.c ft_strdup.c ft_strtrim.c ft_atoi.c\
		ft_memcpy.c ft_striteri.c ft_substr.c ft_bzero.c ft_memmove.c\
		ft_strjoin.c ft_tolower.c ft_calloc.c ft_memset.c ft_strlcat.c\
	   	ft_toupper.c ft_isalnum.c ft_putchar_fd.c ft_strlcpy.c ft_isalpha.c\
		ft_putendl_fd.c ft_strlen.c ft_isascii.c ft_putnbr_fd.c ft_strmapi.c\
		ft_isdigit.c ft_putstr_fd.c ft_strncmp.c ft_isprint.c ft_split.c\
		ft_strnstr.c ft_itoa.c ft_memchr.c ft_strchr.c ft_strrchr.c
BONUS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c\
		ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c\
		ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c
OBJ = $(SRS:%.c=%.o)
BONUS-OBJS = $(BONUS:.c=.o)
HEADER = libft.h
NAME = libft.a
LIB = ar rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(LIB)	$(NAME)	$(OBJ)

%.o:%.c
	$(CC) $(CFLAGS) -I$(HEADER) -c $< -o $@
	
bonus:	$(BONUS-OBJS)
	ar -rcs	$(NAME)	$(BONUS-OBJS)

clean:
	rm -f	$(OBJ)	$(BONUS-OBJS)

fclean: clean
	rm -f	$(NAME)

re: fclean all

.PHONY:all	clean	fclean	re	bonus


	
