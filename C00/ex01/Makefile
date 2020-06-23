NAME = callsaul

FLAGS = -Wall -Wextra -Werror

CC = g++

SRCS = megaphone.cpp

OBJECT = $(SRCS:.cpp=.o)

$(NAME):
	@$(CC) $(FLAGS) -c $(SRCS) 
	@$(CC) $(FLAGS) -o $(NAME) $(OBJECT)

all: $(NAME)

clean:
	@rm -rf $(OBJECT)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean  re
