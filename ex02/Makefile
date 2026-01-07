NAME		= FragTrap

CXX			= c++
CXXFLAGS 	= -Wall -Werror -Wextra
CXXFLAGS	+= -std=c++98 -pedantic

RM			= rm -rf
SRCS		= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
INCLUDES	= ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
OBJS		= $(SRCS:.cpp=.o)

all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(OBJS) $(NAME)

re: fclean all

.PHONY: all clean fclean re
