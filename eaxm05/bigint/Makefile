CXX = c++
CXXFLAGS = -Wall -Wextra -Werror

NAME = program

FILES =  bigint.cpp main.cpp
OBJS=$(FILES:.cpp=.o)


all:$(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)
fclean:clean
	rm -f $(NAME)

re:fclean all

.PHONY:fclean clean all
