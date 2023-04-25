
NAME		=	program

CPP			=	c++

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM			=	rm -f

SRCS		=	Fixed.cpp main.cpp

OBJS		=	$(SRCS:.cpp=.o)

%.o:%.c
			$(CPP) $(CPPFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CPP) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
			$(RM) $(OBJS)

fclean: 	clean
			rm -rf $(NAME)

re:			fclean all

.PHONY: all clean fclean re
