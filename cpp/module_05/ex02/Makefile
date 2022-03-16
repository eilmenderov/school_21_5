SRCS	= Bureaucrat.cpp main.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

NAME	= run

HEADER	= Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp

OBJS	= ${SRCS:.cpp=.o}

CPP		= c++

RM		= rm -f

FLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic

all:			${NAME} ${HEADER}

%.o: %.c		$(HEADER)
				$(FLAGS) -c $< -o ${<:.cpp=.o}

${NAME}:		${OBJS} ${HEADER}
				${CPP} ${FLAGS} -o ${NAME} ${OBJS}

clean:
				${RM} ${OBJS}

fclean:			clean
				${RM} ${NAME} my_home_shrubbery

re:				fclean ${NAME}

.PHONY:			all clean fclean re
