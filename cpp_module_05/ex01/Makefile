NAME = form

SRCS = main.cpp Bureaucrat.cpp Form.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME) -ggdb

clean : 
		rm -rf $(NAME) $(OBJS)

re : clean $(NAME)

.PHONY : all clean re