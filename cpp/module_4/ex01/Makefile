SRCS	= Animal.cpp Dog.cpp Cat.cpp main.cpp Brain.cpp

NAME	= run

HEADER	= Animal.hpp Dog.hpp Cat.hpp Brain.hpp

OBJS	= ${SRCS:.cpp=.o}

CPP		= c++

RM		= rm -f

FLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic

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
