# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/01 20:10:47 by juan-her          #+#    #+#              #
#    Updated: 2026/04/04 21:29:39 by juan-her         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = fixed
SRC = Point.cpp bsp.cpp Fixed.cpp main.cpp
OBJ_DIR = ./obj
OBJ = $(SRC:%.cpp=$(OBJ_DIR)/%.o)
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "Fixed created"

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o:%.cpp | $(OBJ_DIR)
	@$(CPP) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ_DIR)
	@echo "Fixed objects deleted"

fclean: clean
	@$(RM) $(NAME)
	@echo "Fixed deleted"

re: fclean all
	@echo "Fixed recompiled"

.PHONY: all clean fclean re