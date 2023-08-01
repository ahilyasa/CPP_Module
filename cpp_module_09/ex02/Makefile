NAME = PmergeMe
SRCS = main.cpp PmergeMe.cpp
OBJS= $(SRCS:.cpp=.o)
CPPFLAGS= -Wall -Wextra -Werror -std=c++98
CC= c++

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(CPPFLAGS) -o $(NAME) -ggdb

clean: 
	rm -rf  $(OBJS) $(NAME) 

fclean:
	rm -rf $(OBJS)

re: fclean all

.PHONY : all clean fclean re