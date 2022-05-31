# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/30 21:37:32 by bkhatib           #+#    #+#              #
#    Updated: 2022/05/31 20:17:29 by bkhatib          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long_bonus

SRCS = $(wildcard *.c moves_bonus/*.c parser_bonus/*.c rendering_bonus/*.c)
OBJS = $(SRCS:.c=.o)
HEADER = so_long_bonus.h

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
		@echo "$(CURSIVE)$(GREY) 	- [BONUS] Compiling $(NAME)  ... $(RESET)\n"
		$(CC) $(OBJS) $(INCLUDE) $(LIBMLX) -lmlx -framework OpenGL -framework AppKit -o $(NAME)
		@echo "$(SUCCESS)$(GREEN) 	- [BONUS] executable ready.\n$(RESET)"

%.o: %.c $(HEADER)
	@echo "$(CURSIVE)$(GREY)	- Making object file $@ from source file $< ... $(RESET)\n"
	@ $(CC) $(FLAGS) -c $< -o $@
	
clean:
	@ $(RM) $(OBJS)
	@echo "$(CURSIVE)$(GREY) 	- [BONUS] Removing object files ... $(RESET)\n"
	@echo "$(SUCCESS)$(GREEN) 	- [BONUS] Object files removed.$(RESET)\n"

fclean: clean
	@ $(RM) $(NAME)
	@echo "$(CURSIVE)$(GREY) 	- [BONUS] Removing $(NAME)... $(RESET)\n"
	@echo "$(SUCCESS)$(GREEN) 	- [BONUS] Executable removed.$(RESET)\n"

re: fclean all