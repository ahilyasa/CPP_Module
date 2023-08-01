NAME = Fixed

SRCS = main.cpp Fixed.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++

$(NAME) : $(OBJS)
		$(CC) $(OBJS) $(FLAGS) -o $(NAME)

clean :
	rm -rf $(OBJS) $(NAME)

re : clean $(NAME)

.PHONY : clean re