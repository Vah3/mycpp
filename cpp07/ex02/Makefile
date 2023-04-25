
NAME		=	Array

CPP			=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 #-fsanitize=address 

SRCS		=	main.cpp

OBJS		=	$(SRCS:.cpp=.o)

RM			=	rm -rf

%.o:%.cpp Array.hpp
	$(CPP) $(CXXFLAGS) -c $< -o $@

all:	$(NAME)

$(NAME):	$(OBJS)
			$(CPP) $(CXXFLAGS) $(SRCS) -o $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
