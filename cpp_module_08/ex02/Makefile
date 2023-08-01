NAME	= mutant

CC		= c++

CPPFLAGS	= -Wall -Werror -Wextra -std=c++98

SRCS	= main.cpp

OBJS	= $(SRCS:.cpp=.o)

$(NAME)	: $(OBJS)
		$(CC) $(OBJS) $(CPPFLAGS) -o $(NAME)

clean	:
		rm -rf $(OBJS) $(NAME)

re		: clean $(NAME)

.PHONY	: clean re