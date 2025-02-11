# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/22 12:50:43 by jceron-g          #+#    #+#              #
#    Updated: 2025/02/11 15:21:25 by jceron-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = clapTrap
CC = c++
CFLAGS = -Wextra -Wall -Werror -std=c++98

DEF_COLOR = \033[0;39m
MAGENTA   = \033[35;1m
YELLOW    = \033[33;1m
GREEN     = \033[32;1m
WHITE     = \033[37;1m
RESET     = \033[0m
GRAY 	  = \033[0;90m
BLUE      = \033[34;1m
CYAN      = \033[37;1m
RED		  = \033[31;1m

SRC = main.cpp ClapTrap.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJ)
			@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
			@echo "$(GREEN)Compilation successful!$(RESET)"
			
clean:
			@rm -frf $(OBJ)
			@echo "$(RED)Cleaning program executables, please wait.$(RESET)"

fclean:
			@rm -rf $(OBJ)
			@rm -rf $(NAME)
			@echo "$(YELLOW)Cleaning program objects.$(RESET)"

re: fclean all
			@echo "$(MAGENTA)Program recompiled$(RESET)"
						
.PHONY: all clean fclean re