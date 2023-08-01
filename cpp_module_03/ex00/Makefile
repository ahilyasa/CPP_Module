NAME = ClapTrap

SRCS = main.cpp ClapTrap.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(OBJS) $(FLAGS) -o $(NAME)


clean:
	rm -rf $(OBJS) $(NAME)

re: clean $(NAME)

.PHONY: all clean re