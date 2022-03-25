#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
    public:
        class InvalidFormNameException : public std::exception {
            virtual const char      *what() const throw ();
            static const char       *ErrMsgInvalidFormName;
        };

        Intern();
        Intern(const Intern &other);
        ~Intern();

        Intern                      &operator=(const Intern &other);

        Form                        *makeForm(const std::string &form_name, const std::string &target);

    private:
        typedef Form* (Intern::*memFuncPtr)(const std::string &target) const;

        static const int            ShrubberyIndex = 0;
        static const int            RobotomyIndex = 1;
        static const int            PresidentialIndex = 2;
        static const int            InvalidIndex = 3;
        static const std::string    ShrubberyFormName;
        static const std::string    RobotomyFormName;
        static const std::string    PresidentialFormName;

        int                         getIndex(const std::string &form_name) const;
        Form                        *makeShrubberyCreationForm(const std::string &target) const ;
        Form                        *makeRobotomyRequestForm(const std::string &target) const ;
        Form                        *makePresidentialPardonForm(const std::string &target) const ;

        memFuncPtr                  funcs[3];
};

#endif
