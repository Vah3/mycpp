
NAME		=	Animal

CPP			=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g -ggdb3

SRCS		=	Animal.cpp Dog.cpp Cat.cpp WrongCat.cpp  WrongAnimal.cpp main.cpp \
				Brain.cpp

OBJS		=	$(SRCS:.cpp=.o)

RM			=	rm -rf

%.o:%.cpp Animal.hpp Dog.hpp Cat.hpp WrongCat.hpp WrongAnimal.hpp Brain.hpp
	$(CPP) $(CXXFLAGS) -c $< -o $@

all:	$(NAME)

$(NAME):	$(OBJS)
			$(CPP) $(CXXFLAGS) $(SRCS) -o $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
