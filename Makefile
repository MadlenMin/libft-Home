# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mminasya <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/25 18:08:48 by mminasya          #+#    #+#              #
#    Updated: 2025/01/26 13:43:03 by mminasya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
SRS = $(wildcard *.c)
OBJ = $(SRS:%.c=%.o)
HEADER = libft.h
NAME = libft.a
LIB = ar rc

all: $(NAME)

$(NAME): $(OBJ)
	$(LIB) $(NAME) $(OBJ)

%.o:%.c
	$(CC) $(CFLAGS) -I$(HEADER) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean all


	
