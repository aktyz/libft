# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/24 16:24:47 by zslowian          #+#    #+#              #
#    Updated: 2024/09/29 18:09:31 by zslowian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

DIR_SRC = src
DIR_OBJ = obj

SUBDIR = is lst mem put str to

SRC_DIR = $(foreach dir, $(SUBDIR), $(addprefix $(DIR_SRC)/, $(dir)))
OBJ_DIR = $(foreach dir, $(SUBDIR), $(addprefix $(DIR_SRC)/, $(dir)))
SRC = $(foreach dir, $(SRC_DIR), $(wildcard $(dir)/*.c))
OBJ = $(subst $(DIR_SRC), $(DIR_OBJ), $(SRC:.c=.o))

INCLUDES = -I includes

$(DIR_OBJ)/%.o: $(DIR_SRC)/%.c
	@mkdir -p $(DIR_OBJ) $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJ)
	@ar cr $(NAME) $(OBJ)
	@ranlib $(NAME)

all: $(NAME)

fclean: clean
	@rm -f $(NAME)
	@rm -fr $(DIR_OBJ)

clean:
	@rm -f $(OBJ)

re: fclean all

.PHONY: all clean fclean re
