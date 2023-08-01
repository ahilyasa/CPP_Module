NAME = account

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

SRCS = Account.cpp tests.cpp

OBJS = $(SRCS=.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(SRCS) -o $(NAME) $(FLAGS)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re