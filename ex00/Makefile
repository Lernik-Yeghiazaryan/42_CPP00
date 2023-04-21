NAME	= megaphone
SRCS	= $(wildcard *.cpp)
#OBJS	= $(SRCS:.cpp=.o)
OBJS	= $(patsubst %.cpp, %.o, $(SRCS))
GPP		= g++
FLAGS	= -Wall -Wextra -Werror
RM		= rm -rf

%.o : %.cpp
	$(GPP) $(FLAGS) -o $@ -c $<

all : $(NAME)
			
$(NAME) : $(OBJS)
	$(GPP) $(FLAGS) $(OBJS) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re