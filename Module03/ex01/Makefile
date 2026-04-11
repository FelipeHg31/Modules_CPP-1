# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/04 21:17:27 by juan-her          #+#    #+#              #
#    Updated: 2026/04/11 03:00:49 by juan-her         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Serena,_my_love!
SRC = ClapTrap.cpp ScavTrap.cpp main.cpp
SRC_OBJ = ./obj
OBJ = $(SRC:%.cpp=$(SRC_OBJ)/%.o)
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "Created"

$(SRC_OBJ):
	@mkdir -p $(SRC_OBJ)

$(SRC_OBJ)/%.o:%.cpp | $(SRC_OBJ)
	@$(CPP) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(SRC_OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re