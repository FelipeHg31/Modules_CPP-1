# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/27 03:14:12 by juan-her          #+#    #+#              #
#    Updated: 2026/03/28 16:12:27 by juan-her         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = harlFilter
SRC = Harl.cpp main.cpp
OBJ_DIR = ./obj
OBJ = $(SRC:%.cpp=$(OBJ_DIR)/%.o)
RM = rm -rf

all: $(NAME)
	@echo "Harl Filter ready"

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