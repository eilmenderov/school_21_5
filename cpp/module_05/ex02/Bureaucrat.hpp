#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Form;

class Bureaucrat {

    public:
        class GradeTooHighException : public std::exception {
            virtual const char  *what() const throw();
            static const char   *ErrMsgGradeHigh;
        };

        class GradeTooLowException : public std::exception {
            virtual const char  *what() const throw();
            static const char   *ErrMsgGradeLow;
        };

        static const int        HighestGrade = 1;
        static const int        LowestGrade = 150;

        Bureaucrat(const std::string &name, int grade = LowestGrade);
        virtual ~Bureaucrat();

        const std::string       &getName() const;
        int                     getGrade() const;
        void                    getPromoted();
        void                    getDemoted();
        void                    signForm(Form &form);
        void                    executeForm(Form const &form);

    private:
        Bureaucrat();
        Bureaucrat(const Bureaucrat &other);

        Bureaucrat              &operator=(const Bureaucrat &other);

        const std::string       &name_;
        int                     grade_;
};

std::ostream                    &operator<<(std::ostream &os, const Bureaucrat &b);

#endif
