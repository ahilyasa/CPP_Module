NAME = btc
SRCS = BitcoinExchange.cpp main.cpp Date.cpp
OBJS= $(SRCS:.cpp=.o)
CPPFLAGS= -Wall -Wextra -Werror -std=c++98
CC= c++

all: $(NAME)

$(NAME): $(OBJS)
	$(CC)  $(OBJS) $(CPPFLAGS) -o $(NAME)

clean: 
	rm -rf $(NAME) $(OBJS)

fclean:
	rm -rf $(NAME) $(OBJS)

re: fclean $(NAME)

.PHONY : all clean fclean re