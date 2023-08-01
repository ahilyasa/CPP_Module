NAME	= base
CC		= c++
FLAGS	= -Wall -Werror -Wextra -std=c++98
SRCS	= main.cpp Base.cpp
OBJS	= $(SRCS:.cpp=.o)

$(NAME)	: $(OBJS)
		$(CC) $(OBJS) $(FLAGS) -o $(NAME)

clean	:
		rm -rf $(OBJS) $(NAME)

re		: clean $(NAME)

.PHONY	: clean re