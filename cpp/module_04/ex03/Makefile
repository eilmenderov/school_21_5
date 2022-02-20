SRCS	= main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp

NAME	= run

HEADER	= AMateria.hpp Ice.hpp Cure.hpp Character.hpp MateriaSource.hpp

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
