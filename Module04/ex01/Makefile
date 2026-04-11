# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/08 21:10:48 by juan-her          #+#    #+#              #
#    Updated: 2026/04/11 03:00:23 by juan-her         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = I_dont_want_to_set_the_world_on_fire
SRC = Animal.cpp Cat.cpp Dog.cpp Brain.cpp main.cpp
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