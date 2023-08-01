NAME = serialize

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(OBJS)

clean:
	rm -rf $(NAME) $(OBJS)

re: clean $(NAME)

.PHONY: all clean re