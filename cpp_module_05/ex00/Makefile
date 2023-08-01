NAME = bureaucrat

SRCS = main.cpp Bureaucrat.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(OBJS) $(FLAGS) -o $(NAME)

clean : 
		rm -rf $(NAME) $(OBJS)

re : clean $(NAME)

.PHONY : all clean re