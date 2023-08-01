NAME = bureaucrat

SRCS = main.cpp AForm.cpp Bureaucrat.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp  \
		PresidentialPardonForm.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(FLAGS) -o $(NAME)

clean:
	rm -rf $(NAME) $(OBJS)
	rm -f *_shrubbery

re: clean $(NAME)

.PHONY: