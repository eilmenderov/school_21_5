SRCS	= main.cpp Fixed.cpp Point.cpp bsp.cpp

NAME	= bsp

HEADER	= Fixed.hpp Point.hpp

OBJS	= ${SRCS:.cpp=.o}

CPP		= clang++

RM		= rm -f

FLAGS	= -Wall -Wextra -Werror -std=c++98

all:			${NAME} ${HEADER}

%.o: %.c		$(HEADER)
				$(FLAGS) -c $< -o ${<:.c=.o}

${NAME}:		${OBJS} ${HEADER}
				${CPP} ${FLAGS} -o ${NAME} ${OBJS}

clean:
				${RM} ${OBJS}

fclean:			clean
				${RM} ${NAME}

re:				fclean ${NAME}

.PHONY:			all clean fclean re
