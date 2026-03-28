# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/25 17:04:53 by juan-her          #+#    #+#              #
#    Updated: 2026/03/25 18:37:31 by juan-her         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = BraiiiiiiinnnzzzZ
SRC = Zombie.cpp randomChump.cpp newZombie.cpp main.cpp
OBJ_DIR = ./obj
OBJ = $(SRC:%.cpp=$(OBJ_DIR)/%.o)
RM = rm -rf

all: $(NAME)
	@echo "Zombies are ready"

$(NAME): $(OBJ)
	@$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	@$(CPP) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ_DIR)
	@echo "Files .o cleaned"

fclean: clean
	@$(RM) $(NAME)
	@echo "Program deleted"

re: fclean all
	@echo "Recompiled program"

.PHONY: all clean fclean re