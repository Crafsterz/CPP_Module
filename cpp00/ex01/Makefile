NAME = phonebook
SRC = PhoneBook.hpp PhoneBook.cpp Contact.cpp Contact.cpp main.cpp
OBJ_DIR = obj
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address -g3

$(OBJ_DIR)%.o: %.cpp
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAFGS)
