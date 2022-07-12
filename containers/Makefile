NAME	=	ft_containers

CC		=	g++ -std=c++98
CFLAGS	=	-Wall -Werror -Wextra -g

HEADERS	=	vector.hpp  # map.hpp set.hpp stack.hpp

SRCS	=	main.cpp

OBJ_DIR	:=	./objects
OBJ		=	$(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

RM = rm -rf

# COLORS

GREEN	= \033[0;32m
YELO	= \033[0;33m
BLUE	= \033[0;34m
NEW		= \033[0;35m
SHALLOW = \033[0m

.PHONY: all clean fclean re bonus

all:		${NAME}

$(OBJ): 	| $(OBJ_DIR)	

$(OBJ_DIR):
			@mkdir -p $(OBJ_DIR)
			
$(OBJ_DIR)/%.o:%.cpp	${HEADER} Makefile
						$(CC) $(CFLAGS) -c $< -o $@