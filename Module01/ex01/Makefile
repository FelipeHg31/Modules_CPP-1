# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/26 19:27:02 by juan-her          #+#    #+#              #
#    Updated: 2026/03/26 23:27:49 by juan-her         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Moar_brainz
SRC = Zombie.cpp zombieHorde.cpp main.cpp
OBJ_DIR = ./obj
OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)
RM = rm -rf

all: $(NAME)
	@echo "Program ready"

$(NAME): $(OBJ)
	@$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	@$(CPP) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)
	@echo "Program delete"

re: fclean all
	@echo "Re program"

.PHONY: all clean fclean re