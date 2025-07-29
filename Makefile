# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amugisha <amugisha6@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/16 23:25:20 by amugisha          #+#    #+#              #
#    Updated: 2024/11/23 19:58:42 by amugisha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
.PHONY: $(NAME) all clean fclean re main prog pclean mclean bonus

NAME = libft.a
MAIN = fmain/main.c
CC = cc
SRCT = $(wildcard *.c)
BNS = $(wildcard *bonus*)
SRC = $(filter-out $(BNS),$(SRCT))
HEADER = .
CFLAGS = -Wall -Wextra -Werror -I $(HEADER)
OBJ = $(SRC:.c=.o)
OBJB = $(BNS:.c=.o)

$(NAME): $(OBJ)
	ar rcs -o $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

all: $(NAME)

clean: 
	rm -f $(OBJ) $(OBJB)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJB) $(NAME)
	ar rcs -o $(NAME) $(OBJB)

main: $(MAIN)
	$(CC) $(CFLAGS) -o fmain/main.o -c $(MAIN)

prog: main
	$(CC) $(CFLAGS) fmain/main.o -L. -l ft -o prog

pclean: mclean
	rm -f prog

mclean:
	rm -f fmain/main.o
