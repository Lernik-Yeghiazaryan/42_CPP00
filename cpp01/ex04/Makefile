NAME		= replaceLines
SRCS		= $(wildcard *.cpp)
OBJS		= $(patsubst %.cpp, %.o, $(SRCS))
GPPFLAGS	= c++ -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

%.o : %.cpp %.hpp Makefile
	$(GPPFLAGS) $(SRCS) -o $@ -c $<

all : $(NAME)

$(NAME) : $(OBJS)
	$(GPPFLAGS) $(OBJS) -o $(NAME)

clean : 
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re