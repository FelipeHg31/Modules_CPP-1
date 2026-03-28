# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/27 01:56:43 by juan-her          #+#    #+#              #
#    Updated: 2026/03/27 01:58:00 by juan-her         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Sed_is_for_losers
SRC = main.cpp
OBJ_DIR = ./obj
OBJ = $(SRC:%.cpp=$(OBJ_DIR)/%.o)
RM = rm -rf

all: $(NAME)
	@echo "Program ready"

$(NAME): $(OBJ)
	@$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o:%.cpp | $(OBJ_DIR)
	@$(CPP) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
	@echo "Re program"

.PHONY: all clean fclean re