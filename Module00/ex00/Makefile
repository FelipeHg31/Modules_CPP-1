# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/23 20:42:19 by juan-her          #+#    #+#              #
#    Updated: 2026/03/25 01:14:52 by juan-her         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = megaphone
SRC = megaphone.cpp
OBJ = $(SRC:%.cpp=%.o)
RM = rm -rf

all: $(NAME)
	@echo "Megaphone done"

$(NAME): $(OBJ)
	@$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "Done"

clean:
	@$(RM) $(OBJ)
	@echo "delete"

fclean: clean
	@$(RM) $(NAME)
	@echo "delete"

re: fclean all
	@echo "re program"

.PHONY: all clean fclean re
