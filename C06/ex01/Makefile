NAME = serialize

FLAGS = -Wall -Wextra -Werror

CC = g++ -std=c++11

SRCS = serialize.cpp\
	   main.cpp\

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
