SRCS	= main.cpp Contact.cpp PhoneBook.cpp

NAME	= phonebook

HEADER	= PhoneBook.hpp

OBJS	= ${SRCS:.cpp=.o}

CPP		= g++

RM		= rm -f

FLAGS	= -Wall -Wextra -Werror -std=c++98

all:			${NAME}

%.o: %.c		$(HEADER)
				$(FLAGS) -c $< -o ${<:.cpp=.o}

${NAME}:		${OBJS} ${HEADER}
				${CPP} ${FLAGS} -o ${NAME} ${OBJS} ${HEADER}

clean:
				${RM} ${OBJS}

fclean:			clean
				${RM} ${NAME}

re:				fclean ${NAME}

.PHONY:			all clean fclean re
