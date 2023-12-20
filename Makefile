## Makefile

CC	=	g++

SRC	=	src/main.cpp		\
		src/Joystick.cpp 	\

OBJ	=	$(SRC:.cpp=.o)

NAME	=	hub_arm

CPPFLAGS	=	-I./include -W -Wall -Wextra

all:	$(NAME)
.PHONY:	all

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CPPFLAGS)

debug:	fclean
debug:	CFLAGS += -ggdb3
debug:	all
.PHONY:	debug

clean:
	rm -f *.o
	find -name *.o -delete
	rm -f *.gc*
	find -name *.gc* -delete
.PHONY:	clean

fclean:	clean
	rm -f $(NAME)
	rm -f $(NAME_TESTS)
.PHONY:	fclean

re: fclean all
.PHONY:	re
