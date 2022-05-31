# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/30 21:37:32 by bkhatib           #+#    #+#              #
#    Updated: 2022/05/31 14:07:06 by bkhatib          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

SRCS = $(wildcard *.c moves/*.c parser/*.c rendering/*.c)
OBJS = $(SRCS:.c=.o)
HEADER = so_long.h

INCLUDE	= -I /usr/local/include
LIBMLX	= -L /usr/local/lib

CC = gcc
FLAGS = -Wall -Wextra -Werror

GREEN		=	\033[92;5;118m
GREY		=	\033[33;2;37m
RESET		=	\033[0m
CURSIVE		=	\033[33;3m
SUCCESS	=	[$(GREEN)SUCCESS$(RESET)]

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
		@echo "$(CURSIVE)$(GREY)	- Making object file $@ from source file $< ... $(RESET)\n"
		$(CC) $(OBJS) $(INCLUDE) $(LIBMLX) -lmlx -framework OpenGL -framework AppKit -o $(NAME)
		@echo "$(SUCCESS)$(GREEN)- Executable ready.\n$(RESET)"

%.o: %.c $(HEADER)
	@echo "$(CURSIVE)$(GREY)	- Making object file $@ from source file $< ... $(RESET)\n"
	@ $(CC) $(FLAGS) -c $< -o $@
	
clean:
	@ $(RM) $(OBJS)
	@echo "$(CURSIVE)$(GREY)	- Removing object files ... $(RESET)\n"
	@echo "$(SUCCESS)$(GREEN) - Object files removed.$(RESET)\n"

fclean: clean
	@ $(RM) $(NAME)
	@echo "$(CURSIVE)$(GREY)	- Removing $(NAME)... $(RESET)\n"
	@echo "$(SUCCESS)$(GREEN) - Executable removed.$(RESET)\n"

re: fclean all