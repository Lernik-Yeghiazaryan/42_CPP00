NAME	= megaphone
SRCS	= $(wildcard *.cpp)
#OBJS	= $(SRCS:.cpp=.o)
OBJS	= $(patsubst %.cpp, %.o, $(SRCS))
CPP		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98 -I.
RM		= rm -rf

%.o : %.cpp %.hpp
	$(CPP) $(FLAGS) -o $@ -c $<

all : $(NAME)
			
$(NAME) : $(OBJS)
	$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re