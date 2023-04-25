
NAME		=	ScavTrap

CPP			=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -g -std=c++98

SRCS		=	ClapTrap.cpp ScavTrap.cpp main.cpp

OBJS		=	$(SRCS:.cpp=.o)

RM			=	rm -rf

%.o:%.cpp	ClapTrap.hpp ScavTrap.hpp
	$(CPP) $(CXXFLAGS) -c $< -o $@

all:	$(NAME)

$(NAME):	$(OBJS)
			$(CPP) $(CXXFLAGS) $(SRCS) -o $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
