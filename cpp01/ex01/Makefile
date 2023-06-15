NAME	= zombie
SRCS	= $(wildcard *.cpp)
OBJS	= $(patsubst %.cpp, %.o, $(SRCS))
GPP		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

%.o : %.cpp %.hpp Makefile
	$(GPP) $(FLAGS) -o $@ -c $<

all : $(NAME)

$(NAME) : $(OBJS)
	$(GPP) $(FLAGS) $(OBJS) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re