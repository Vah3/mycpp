
NAME		=	ClapTrap

CPP			=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS		=	ClapTrap.cpp main.cpp

OBJS		=	$(SRCS:.cpp=.o)

RM			=	rm -rf

%.o:%.cpp ClapTrap.hpp
	$(CPP) $(CXXFLAGS) -c $< -o $(NAME)

all:	$(NAME)

$(NAME):	$(OBJS)
			$(CPP) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
