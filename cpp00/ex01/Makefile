NAME = phonebook
SRC = PhoneBook.cpp Contact.cpp main.cpp
HEADERS = PhoneBook.hpp Contact.hpp
OBJ_DIR = obj
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address -g3

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
