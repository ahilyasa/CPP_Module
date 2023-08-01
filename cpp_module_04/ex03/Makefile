NAME = AMateria

SRCS = main.cpp AMateria.cpp MateriaSource.cpp Character.cpp Ice.cpp Cure.cpp 

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(NAME) $(OBJS)

re : clean $(NAME)

.PHONY: all clean re