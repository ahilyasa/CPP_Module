NAME = easyfind

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(OBJS) $(CPPFLAGS) -o $(NAME)

clean : 
	rm -rf $(NAME) $(OBJS)

re : clean $(NAME)

.PHONY: all clean re 